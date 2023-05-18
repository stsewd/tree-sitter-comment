#include "tree_sitter_comment/parser.h"

#include "tree_sitter_comment/chars.h"
#include "tree_sitter_comment/tokens.h"

/// Parse the name of the tag.
///
/// They can be of the form:
/// - TODO:
/// - TODO: text
/// - TODO(stsewd):
/// - TODO(stsewd): text
/// - TODO (stsewd): text
bool parse_tagname(CommentScanner* scanner)
{
  TSLexer* lexer = scanner->lexer;
  const bool* valid_symbols = scanner->valid_symbols;

  if (!is_abc_upper(scanner->lookahead) || !valid_symbols[T_TAGNAME]) {
    return false;
  }

  int32_t previous = scanner->lookahead;
  scanner->advance(scanner);

  while (is_abc_upper(scanner->lookahead)
      || is_digit(scanner->lookahead)
      || is_internal_char(scanner->lookahead)) {
    previous = scanner->lookahead;
    scanner->advance(scanner);
  }
  lexer->mark_end(lexer);

  // It can't end with an internal char.
  if (is_internal_char(previous)) {
    return parse_text(scanner, false);
  }

  // For the user component this is `\s*(`.
  // We don't parse that part, we just need to be sure it ends with `:\s`.
  if ((is_space(scanner->lookahead) && !is_newline(scanner->lookahead))
      || scanner->lookahead == '(') {
    // Skip white spaces.
    while (is_space(scanner->lookahead) && !is_newline(scanner->lookahead)) {
      scanner->advance(scanner);
    }
    // Checking aperture.
    if (scanner->lookahead != '(') {
      return parse_text(scanner, false);
    }
    scanner->advance(scanner);

    // Checking closure.
    int user_length = 0;
    while (scanner->lookahead != ')') {
      if (is_newline(scanner->lookahead)) {
        return parse_text(scanner, false);
      }
      scanner->advance(scanner);
      user_length++;
    }
    if (user_length <= 0) {
      return parse_text(scanner, false);
    }
    scanner->advance(scanner);
  }

  // It should end with `:`...
  if (scanner->lookahead != ':') {
    return parse_text(scanner, false);
  }

  // ... and be followed by one space.
  scanner->advance(scanner);
  if (!is_space(scanner->lookahead)) {
    return parse_text(scanner, false);
  }

  lexer->result_symbol = T_TAGNAME;
  return true;
}

bool parse_url(CommentScanner* scanner)
{
  const bool* valid_symbols = scanner->valid_symbols;

  if (!is_abc(scanner->lookahead) || !valid_symbols[T_URL]) {
    return false;
  }
  scanner->advance(scanner);
  return parse_inner_url(scanner);
}

// Borrowed (mostly) from tree-sitter-rst.
//
// Extract URLs for those that have schemes as defined in chars.c/is_known_schema()
bool parse_inner_url(CommentScanner* scanner)
{
  TSLexer* lexer = scanner->lexer;

  const unsigned MAX_SCHEMA_LEN = 20;
  char* schema = malloc(sizeof(char) * MAX_SCHEMA_LEN);
  unsigned consumed_chars = 0;

  schema[consumed_chars++] = (char)scanner->previous;

  while (consumed_chars < MAX_SCHEMA_LEN) {
    if (!is_alphanumeric(scanner->lookahead)) {
      break;
    }
    schema[consumed_chars++] = (char)scanner->lookahead;
    scanner->advance(scanner);
  }

  bool is_word = false;

  if (is_start_char(scanner->lookahead)) {
    lexer->mark_end(lexer);
  }

  bool is_valid = false;

  if (scanner->lookahead == ':') {
    is_valid = is_known_schema(schema, consumed_chars);
  } else if (scanner->lookahead == '@') {
    is_valid = true;
  }

  // Clean up
  free(schema);
  schema = NULL;

  if (!is_valid) {
    return parse_text(scanner, !is_word);
  }

  scanner->advance(scanner);

  if (scanner->lookahead == '/') {
    scanner->advance(scanner);
  } else if (!is_alphanumeric(scanner->lookahead)) {
    return parse_text(scanner, !is_word);
  }

  consumed_chars = 0;
  bool is_escaped = false;
  while (true) {
    lexer->mark_end(lexer);
    if (scanner->lookahead == '\\') {
      scanner->advance(scanner);
      is_escaped = true;
    } else {
      is_escaped = false;
    }
    if (is_invalid_uri_char(scanner->lookahead)) {
      break;
    }
    if (is_space(scanner->lookahead)
        || (is_end_char(scanner->lookahead) && !is_escaped && scanner->lookahead != '/')) {
      if (is_end_char(scanner->lookahead)) {
        lexer->mark_end(lexer);
        scanner->advance(scanner);
        if (!is_alphanumeric(scanner->lookahead)) {
          lexer->result_symbol = T_URL;
          return true;
        }
      } else {
        break;
      }
    }
    scanner->advance(scanner);
    consumed_chars++;
  }

  if (consumed_chars > 0) {
    lexer->result_symbol = T_URL;
    return true;
  }

  return parse_text(scanner, !is_word);
}

/// Parse normal text.
///
/// Text nodes are separated by white spaces or an start char like `(`
bool parse_text(CommentScanner* scanner, bool end)
{
  TSLexer* lexer = scanner->lexer;
  const bool* valid_symbols = scanner->valid_symbols;

  if (!valid_symbols[T_TEXT]) {
    return false;
  }

  if (is_start_char(scanner->lookahead) || is_end_char(scanner->lookahead)) {
    scanner->advance(scanner);

  } else {
    while (!is_space(scanner->lookahead)) {
      if (is_start_char(scanner->lookahead) || is_end_char(scanner->lookahead)) {
        break;
      }
      scanner->advance(scanner);
    }
  }

  if (end) {
    lexer->mark_end(lexer);
  }

  lexer->result_symbol = T_TEXT;
  return true;
}
