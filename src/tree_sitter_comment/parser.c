#include "tree_sitter_comment/parser.h"

#include <ctype.h>
#include <stdio.h>

#include "tree_sitter_comment/chars.c"
#include "tree_sitter_comment/tokens.h"

bool parse_tagname(TSLexer* lexer, const bool* valid_symbols)
{
  if (!isupper(lexer->lookahead) || !valid_symbols[T_TAGNAME]) {
    return false;
  }

  int32_t previous = lexer->lookahead;
  lexer->advance(lexer, false);

  while (isupper(lexer->lookahead) || isdigit(lexer->lookahead) || is_internal_char(lexer->lookahead)) {
    previous = lexer->lookahead;
    lexer->advance(lexer, false);
  }
  lexer->mark_end(lexer);

  if (is_internal_char(previous)) {
    return parse_text(lexer, valid_symbols, false);
  }

  if ((is_space(lexer->lookahead) && !is_newline(lexer->lookahead)) || lexer->lookahead == '(') {
    // Skip white spaces.
    while (is_space(lexer->lookahead) && !is_newline(lexer->lookahead)) {
      lexer->advance(lexer, false);
    }
    if (lexer->lookahead != '(') {
      return parse_text(lexer, valid_symbols, true);
    }
    while (lexer->lookahead != ')') {
      if (is_newline(lexer->lookahead)) {
        return parse_text(lexer, valid_symbols, true);
      }
      lexer->advance(lexer, false);
    }
    lexer->advance(lexer, false);
  }

  if (lexer->lookahead != ':') {
    return parse_text(lexer, valid_symbols, false);
  }

  lexer->advance(lexer, false);
  if (!is_space(lexer->lookahead)) {
    return parse_text(lexer, valid_symbols, false);
  }

  lexer->result_symbol = T_TAGNAME;
  return true;
}

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
    bool result = parse_tagname(lexer, valid_symbols);
    return result;
  }
  if (!is_space(lexer->lookahead) && valid_symbols[T_TEXT]) {
    return parse_text(lexer, valid_symbols, true);
  }
  return false;
}
