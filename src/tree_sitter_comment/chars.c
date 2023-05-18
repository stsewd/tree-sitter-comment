#include <string.h>
#include "chars.h"

bool is_digit(int32_t c)
{
  const int32_t upper = 48;
  const int32_t lower = 57;
  return c >= upper && c <= lower;
}

bool is_abc_upper(int32_t c)
{
  const int32_t upper = 65;
  const int32_t lower = 90;
  return c >= upper && c <= lower;
}

bool is_abc_lower(int32_t c)
{
  const int32_t upper = 97;
  const int32_t lower = 122;
  return c >= upper && c <= lower;
}

bool is_abc(int32_t c)
{
  return is_abc_lower(c) || is_abc_upper(c);
}

bool is_alphanumeric(int32_t c)
{
  return is_abc(c) || is_digit(c);
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

bool is_known_schema(char* string, unsigned string_len)
{
  char* valid_schemas[] = {
    "dns",
    "file",
    "ftp",
    "http",
    "https",
    "ipp",
    "mailto",
    "sms",
    "tel",
    "telnet",
    "ssh",
    "urn",
    "ws",
    "wss",
  };

  const int length = sizeof(valid_schemas) / sizeof(char*);
  for (int i = 0; i < length; i++) {
    if (string_len != strlen(valid_schemas[i])) {
      continue;
    }
    int result = memcmp(string, valid_schemas[i], string_len);
    if (result == 0) {
      return true;
    }
  }
  return false;
}

bool is_invalid_uri_char(int32_t c)
{
  const int32_t invalid_chars[] = {
    '^',
    '}',
    '{',
    '\\',
  };
  const int length = sizeof(invalid_chars) / sizeof(int32_t);
  for (int i = 0; i < length; i++) {
    if (c == invalid_chars[i]) {
      return true;
    }
  }
  return false;
}
