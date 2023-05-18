#ifndef TREE_SITTER_COMMENT_SCANNER_H
#define TREE_SITTER_COMMENT_SCANNER_H

#include <tree_sitter/parser.h>

typedef struct CommentScanner CommentScanner;

/// Wrapper struct around ``TSLexer`` to track the previous char for URI scheme identification.
struct CommentScanner {
  TSLexer* lexer;
  const bool* valid_symbols;

  int32_t lookahead;
  int32_t previous;

  void (*advance)(CommentScanner* scanner);
  bool (*scan)(CommentScanner* scanner);
};

CommentScanner* new_comment_scanner();
void destroy_comment_scanner(CommentScanner* scanner);

void comment_scanner_advance(CommentScanner* scanner);
bool comment_scanner_scan(CommentScanner* scanner);

#endif
