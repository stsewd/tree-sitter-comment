#include "tree_sitter_comment/scanner.h"

#include <string.h>

#include "tree_sitter_comment/chars.c"
#include "tree_sitter_comment/parser.c"
#include "tree_sitter_comment/tokens.h"

// Build a new `CommentScanner` object.
//
// `destroy_comment_scanner` should be called to safely destroy this object.
CommentScanner* new_comment_scanner()
{
  CommentScanner* scanner = malloc(sizeof(CommentScanner));

  scanner->advance = comment_scanner_advance;
  scanner->scan = comment_scanner_scan;

  return scanner;
}

void destroy_comment_scanner(CommentScanner* scanner)
{
  free(scanner);
}

// Keep track of the previous token so we can match valid URL schemes.
void comment_scanner_advance(CommentScanner* scanner)
{
  TSLexer* lexer = scanner->lexer;
  scanner->previous = scanner->lookahead;
  lexer->advance(lexer, false);
  scanner->lookahead = lexer->lookahead;
}

bool comment_scanner_scan(CommentScanner* scanner)
{
  TSLexer* lexer = scanner->lexer;
  const bool* valid_symbols = scanner->valid_symbols;
  int32_t current = lexer->lookahead;

  if (is_abc_upper(lexer->lookahead) && valid_symbols[T_TAGNAME]) {
    return parse_tagname(scanner);
  }

  if (is_abc(lexer->lookahead) && valid_symbols[T_URL]) {
    return parse_url(scanner);
  }

  if (!is_space(lexer->lookahead) && valid_symbols[T_TEXT]) {
    return parse_text(scanner, true);
  }

  return false;
}
