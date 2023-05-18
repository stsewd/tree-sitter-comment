#ifndef TREE_SITTER_COMMENT_CHARS_H
#define TREE_SITTER_COMMENT_CHARS_H

#include <stdbool.h>
#include <stdint.h>

#define CHAR_EOF 0
#define CHAR_NEWLINE 10
#define CHAR_CARRIAGE_RETURN 13

#define CHAR_SPACE ' '
#define CHAR_FORM_FEED '\f'
#define CHAR_TAB '\t'
#define CHAR_VERTICAL_TAB '\v'

bool is_internal_char(int32_t c);
bool is_newline(int32_t c);
bool is_space(int32_t c);
bool is_abc_upper(int32_t c);
bool is_digit(int32_t c);
bool is_start_char(int32_t c);
bool is_end_char(int32_t c);
bool is_abc_lower(int32_t c);
bool is_abc(int32_t c);
bool is_alphanumeric(int32_t c);
bool is_known_schema(char* string, unsigned strlen);
bool is_invalid_uri_char(int32_t c);

#endif /* ifndef TREE_SITTER_COMMENT_CHARS_H */
