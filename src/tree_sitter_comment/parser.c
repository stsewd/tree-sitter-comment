#include "tree_sitter_comment/parser.h"

#include <ctype.h>
#include <stdio.h>

#include "tree_sitter_comment/chars.c"
#include "tree_sitter_comment/tokens.h"

/// Parse a the name of the tag.
///
/// They can be of the form:
/// - TODO:
/// - TODO: text
/// - TODO(stsewd):
/// - TODO(stsewd): text
/// - TODO (stsewd): text
bool parse_tagname(TSLexer* lexer, const bool* valid_symbols)
{
  if (!isupper(lexer->lookahead) || !valid_symbols[T_TAGNAME]) {
    return false;
  }

  int32_t previous = lexer->lookahead;
  lexer->advance(lexer, false);

  while (isupper(lexer->lookahead)
      || isdigit(lexer->lookahead)
      || is_internal_char(lexer->lookahead)) {
    previous = lexer->lookahead;
    lexer->advance(lexer, false);
  }
  lexer->mark_end(lexer);

  // It can't end with an internal char.
  if (is_internal_char(previous)) {
    return parse_text(lexer, valid_symbols, false);
  }

  // For the user component this is `\s*(`.
  // We don't parse that part, we just need to be sure it ends with `:\s`.
  if ((is_space(lexer->lookahead) && !is_newline(lexer->lookahead))
      || lexer->lookahead == '(') {
    // Skip white spaces.
    while (is_space(lexer->lookahead) && !is_newline(lexer->lookahead)) {
      lexer->advance(lexer, false);
    }
    // Checking aperture.
    if (lexer->lookahead != '(') {
      return parse_text(lexer, valid_symbols, true);
    }
    // Checking closure.
    while (lexer->lookahead != ')') {
      if (is_newline(lexer->lookahead)) {
        return parse_text(lexer, valid_symbols, true);
      }
      lexer->advance(lexer, false);
    }
    lexer->advance(lexer, false);
  }

  // It should end with `:`...
  if (lexer->lookahead != ':') {
    return parse_text(lexer, valid_symbols, false);
  }

  // ... and be followed by one space.
  lexer->advance(lexer, false);
  if (!is_space(lexer->lookahead)) {
    return parse_text(lexer, valid_symbols, false);
  }

  lexer->result_symbol = T_TAGNAME;
  return true;
}

/// Parse normal text.
///
/// Text nodes are september by white spaces or an start char like `(`
bool parse_text(TSLexer* lexer, const bool* valid_symbols, bool end)
{
  if (is_space(lexer->lookahead) || !valid_symbols[T_TEXT]) {
    if (!end && valid_symbols[T_TEXT]) {
      lexer->result_symbol = T_TEXT;
      return true;
    }
    return false;
  }
  while (!is_space(lexer->lookahead)) {
    if (is_start_char(lexer->lookahead)) {
      lexer->advance(lexer, false);
      break;
    }
    lexer->advance(lexer, false);
  }

  if (end) {
    lexer->mark_end(lexer);
  }
  lexer->result_symbol = T_TEXT;
  return true;
}

bool tree_sitter_comment_parse(TSLexer* lexer, const bool* valid_symbols)
{
  if (isupper(lexer->lookahead) && valid_symbols[T_TAGNAME]) {
    return parse_tagname(lexer, valid_symbols);
  }
  if (!is_space(lexer->lookahead) && valid_symbols[T_TEXT]) {
    return parse_text(lexer, valid_symbols, true);
  }
  return false;
}
