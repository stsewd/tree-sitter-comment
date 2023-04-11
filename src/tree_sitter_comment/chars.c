#include "chars.h"

bool is_upper(int32_t c)
{
  const int32_t upper = 65;
  const int32_t lower = 90;
  return c >= upper && c <= lower;
}

bool is_digit(int32_t c)
{
  const int32_t upper = 48;
  const int32_t lower = 57;
  return c >= upper && c <= lower;
}

bool is_newline(int32_t c)
{
  const int32_t newline_chars[] = {
    CHAR_EOF,
    CHAR_NEWLINE,
    CHAR_CARRIAGE_RETURN,
  };
  const int length = sizeof(newline_chars) / sizeof(int32_t);
  for (int i = 0; i < length; i++) {
    if (c == newline_chars[i]) {
      return true;
    }
  }
  return false;
}

bool is_space(int32_t c)
{
  const int32_t space_chars[] = {
    CHAR_SPACE,
    CHAR_FORM_FEED,
    CHAR_TAB,
    CHAR_VERTICAL_TAB,
  };
  const int length = sizeof(space_chars) / sizeof(int32_t);
  bool is_space_char = false;
  for (int i = 0; i < length; i++) {
    if (c == space_chars[i]) {
      is_space_char = true;
      break;
    }
  }
  return is_space_char || is_newline(c);
}

/// Check if the character is allowed inside the name.
bool is_internal_char(int32_t c)
{
  const int32_t valid_chars[] = {
    '-',
    '_',
  };
  const int length = sizeof(valid_chars) / sizeof(int32_t);
  for (int i = 0; i < length; i++) {
    if (c == valid_chars[i]) {
      return true;
    }
  }
  return false;
}

/// Check if it's a start char.
///
/// Some tokens can start after non-whitespace chars.
bool is_start_char(int32_t c)
{
  const int32_t valid_chars[] = {
    '-',
    '/',
    '\'',
    '"',
    '<',
    '(',
    '[',
    '{',
  };
  const int length = sizeof(valid_chars) / sizeof(int32_t);
  for (int i = 0; i < length; i++) {
    if (c == valid_chars[i]) {
      return true;
    }
  }
  return false;
}

/// Check if it's an end char.
///
/// Some tokens can end after non-whitespace chars.
bool is_end_char(int32_t c)
{
  const int32_t valid_chars[] = {
    '-',
    '.',
    ',',
    ':',
    ';',
    '!',
    '?',
    '\\',
    '/',
    '\'',
    '"',
    ')',
    ']',
    '}',
    '>',
  };
  const int length = sizeof(valid_chars) / sizeof(int32_t);
  for (int i = 0; i < length; i++) {
    if (c == valid_chars[i]) {
      return true;
    }
  }
  return false;
}
