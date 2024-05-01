#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 34
#define LARGE_STATE_COUNT 19
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_COLON = 1,
  anon_sym_vi_COLON = 2,
  anon_sym_vim_COLON = 3,
  anon_sym_ex_COLON = 4,
  aux_sym_modeline_token1 = 5,
  aux_sym_modeline_token2 = 6,
  anon_sym_Vim_COLON = 7,
  aux_sym_modeline_token3 = 8,
  sym_option = 9,
  anon_sym_LPAREN = 10,
  aux_sym__user_token1 = 11,
  anon_sym_RPAREN = 12,
  aux_sym__full_uri_token1 = 13,
  sym_uri = 14,
  aux_sym__text_token1 = 15,
  anon_sym_SLASH = 16,
  anon_sym_SQUOTE = 17,
  anon_sym_DQUOTE = 18,
  anon_sym_LT = 19,
  anon_sym_LBRACK = 20,
  anon_sym_LBRACE = 21,
  anon_sym_DOT = 22,
  anon_sym_COMMA = 23,
  anon_sym_SEMI = 24,
  anon_sym_BANG = 25,
  anon_sym_QMARK = 26,
  anon_sym_BSLASH = 27,
  anon_sym_RBRACE = 28,
  anon_sym_RBRACK = 29,
  anon_sym_GT = 30,
  anon_sym_DASH = 31,
  sym_name = 32,
  sym_invalid_token = 33,
  sym_source = 34,
  sym_tag = 35,
  sym_modeline = 36,
  sym__user = 37,
  sym__full_uri = 38,
  sym__text = 39,
  sym__stop_char = 40,
  sym__end_char = 41,
  aux_sym_source_repeat1 = 42,
  aux_sym_modeline_repeat1 = 43,
  aux_sym_modeline_repeat2 = 44,
  aux_sym_modeline_repeat3 = 45,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [anon_sym_vi_COLON] = "vi:",
  [anon_sym_vim_COLON] = "vim:",
  [anon_sym_ex_COLON] = "ex:",
  [aux_sym_modeline_token1] = "modeline_token1",
  [aux_sym_modeline_token2] = "modeline_token2",
  [anon_sym_Vim_COLON] = "Vim:",
  [aux_sym_modeline_token3] = "modeline_token3",
  [sym_option] = "option",
  [anon_sym_LPAREN] = "(",
  [aux_sym__user_token1] = "user",
  [anon_sym_RPAREN] = ")",
  [aux_sym__full_uri_token1] = "_full_uri_token1",
  [sym_uri] = "uri",
  [aux_sym__text_token1] = "_text_token1",
  [anon_sym_SLASH] = "/",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_LT] = "<",
  [anon_sym_LBRACK] = "[",
  [anon_sym_LBRACE] = "{",
  [anon_sym_DOT] = ".",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_BANG] = "!",
  [anon_sym_QMARK] = "\?",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_RBRACE] = "}",
  [anon_sym_RBRACK] = "]",
  [anon_sym_GT] = ">",
  [anon_sym_DASH] = "-",
  [sym_name] = "name",
  [sym_invalid_token] = "invalid_token",
  [sym_source] = "source",
  [sym_tag] = "tag",
  [sym_modeline] = "modeline",
  [sym__user] = "_user",
  [sym__full_uri] = "_full_uri",
  [sym__text] = "text",
  [sym__stop_char] = "_stop_char",
  [sym__end_char] = "text",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_modeline_repeat1] = "modeline_repeat1",
  [aux_sym_modeline_repeat2] = "modeline_repeat2",
  [aux_sym_modeline_repeat3] = "modeline_repeat3",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_vi_COLON] = anon_sym_vi_COLON,
  [anon_sym_vim_COLON] = anon_sym_vim_COLON,
  [anon_sym_ex_COLON] = anon_sym_ex_COLON,
  [aux_sym_modeline_token1] = aux_sym_modeline_token1,
  [aux_sym_modeline_token2] = aux_sym_modeline_token2,
  [anon_sym_Vim_COLON] = anon_sym_Vim_COLON,
  [aux_sym_modeline_token3] = aux_sym_modeline_token3,
  [sym_option] = sym_option,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym__user_token1] = aux_sym__user_token1,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym__full_uri_token1] = aux_sym__full_uri_token1,
  [sym_uri] = sym_uri,
  [aux_sym__text_token1] = aux_sym__text_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_name] = sym_name,
  [sym_invalid_token] = sym_invalid_token,
  [sym_source] = sym_source,
  [sym_tag] = sym_tag,
  [sym_modeline] = sym_modeline,
  [sym__user] = sym__user,
  [sym__full_uri] = sym__full_uri,
  [sym__text] = sym__text,
  [sym__stop_char] = sym__stop_char,
  [sym__end_char] = sym__text,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_modeline_repeat1] = aux_sym_modeline_repeat1,
  [aux_sym_modeline_repeat2] = aux_sym_modeline_repeat2,
  [aux_sym_modeline_repeat3] = aux_sym_modeline_repeat3,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vi_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vim_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ex_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_modeline_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_modeline_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_Vim_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_modeline_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__user_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__full_uri_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_uri] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__text_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_invalid_token] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_modeline] = {
    .visible = true,
    .named = true,
  },
  [sym__user] = {
    .visible = false,
    .named = true,
  },
  [sym__full_uri] = {
    .visible = false,
    .named = true,
  },
  [sym__text] = {
    .visible = true,
    .named = false,
  },
  [sym__stop_char] = {
    .visible = false,
    .named = true,
  },
  [sym__end_char] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_modeline_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_modeline_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_modeline_repeat3] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 7,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
};

static inline bool sym_uri_character_set_1(int32_t c) {
  return (c < '.'
    ? (c < ')'
      ? (c < '\''
        ? (c >= '!' && c <= '"')
        : c <= '\'')
      : (c <= ')' || c == ','))
    : (c <= '.' || (c < '\\'
      ? (c < '>'
        ? (c >= ':' && c <= ';')
        : c <= '?')
      : (c <= ']' || c == '}'))));
}

static inline bool aux_sym__text_token1_character_set_1(int32_t c) {
  return (c < ';'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : c <= '\r')
      : (c <= '"' || (c < ','
        ? (c >= '\'' && c <= ')')
        : c <= '/')))
    : (c <= '<' || (c < '{'
      ? (c < '['
        ? (c >= '>' && c <= '?')
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool aux_sym__text_token1_character_set_2(int32_t c) {
  return (c < ':'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : c <= '\r')
      : (c <= '"' || (c < ','
        ? (c >= '\'' && c <= ')')
        : c <= '/')))
    : (c <= '<' || (c < '{'
      ? (c < '['
        ? (c >= '>' && c <= '?')
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      if (lookahead == '!') ADVANCE(83);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(67);
      if (lookahead == '(') ADVANCE(44);
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == ',') ADVANCE(79);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == '<') ADVANCE(71);
      if (lookahead == '>') ADVANCE(93);
      if (lookahead == '?') ADVANCE(85);
      if (lookahead == 'V') ADVANCE(34);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(87);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == 'h') ADVANCE(39);
      if (lookahead == 'v') ADVANCE(35);
      if (lookahead == '{') ADVANCE(75);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(24);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == 's') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(42);
      END_STATE();
    case 7:
      if (lookahead == 's') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(48);
      END_STATE();
    case 8:
      if (lookahead == 't') ADVANCE(1);
      END_STATE();
    case 9:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(42);
      END_STATE();
    case 10:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(45);
      END_STATE();
    case 11:
      if (sym_uri_character_set_1(lookahead)) ADVANCE(12);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(49);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 13:
      if (eof) ADVANCE(16);
      if (lookahead == '!') ADVANCE(83);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(67);
      if (lookahead == '(') ADVANCE(44);
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == ',') ADVANCE(79);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == '<') ADVANCE(71);
      if (lookahead == '>') ADVANCE(93);
      if (lookahead == '?') ADVANCE(85);
      if (lookahead == 'V') ADVANCE(34);
      if (lookahead == '[') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(87);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == 'h') ADVANCE(39);
      if (lookahead == 'v') ADVANCE(35);
      if (lookahead == '{') ADVANCE(75);
      if (lookahead == '}') ADVANCE(89);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 14:
      if (eof) ADVANCE(16);
      if (lookahead == '!') ADVANCE(82);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '\'') ADVANCE(66);
      if (lookahead == '(') ADVANCE(43);
      if (lookahead == ')') ADVANCE(46);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(94);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '<') ADVANCE(70);
      if (lookahead == '>') ADVANCE(92);
      if (lookahead == '?') ADVANCE(84);
      if (lookahead == 'V') ADVANCE(56);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead == ']') ADVANCE(90);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == 'h') ADVANCE(61);
      if (lookahead == 'v') ADVANCE(57);
      if (lookahead == '{') ADVANCE(74);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 15:
      if (eof) ADVANCE(16);
      if (lookahead == '!') ADVANCE(82);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '\'') ADVANCE(66);
      if (lookahead == '(') ADVANCE(43);
      if (lookahead == ')') ADVANCE(46);
      if (lookahead == ',') ADVANCE(78);
      if (lookahead == '-') ADVANCE(94);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '<') ADVANCE(70);
      if (lookahead == '>') ADVANCE(92);
      if (lookahead == '?') ADVANCE(84);
      if (lookahead == 'V') ADVANCE(56);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead == ']') ADVANCE(90);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == 'h') ADVANCE(61);
      if (lookahead == 'v') ADVANCE(57);
      if (lookahead == '{') ADVANCE(74);
      if (lookahead == '}') ADVANCE(88);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_vi_COLON);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_vim_COLON);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_ex_COLON);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_modeline_token1);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_modeline_token2);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_Vim_COLON);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_modeline_token3);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ':') ADVANCE(42);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ':') ADVANCE(42);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          (',' <= lookahead && lookahead <= '/') ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '?' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(42);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(41);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          (',' <= lookahead && lookahead <= '/') ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '?' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(42);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(41);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          (',' <= lookahead && lookahead <= '/') ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '?' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(42);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(41);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          (',' <= lookahead && lookahead <= '/') ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '?' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(42);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(41);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          (',' <= lookahead && lookahead <= '/') ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '?' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(42);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(41);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          (',' <= lookahead && lookahead <= '/') ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '?' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(42);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(41);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'e') ADVANCE(25);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(42);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          (',' <= lookahead && lookahead <= '/') ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '?' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(42);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(41);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          (',' <= lookahead && lookahead <= '/') ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '?' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(42);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(41);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'm') ADVANCE(29);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          (',' <= lookahead && lookahead <= '/') ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '?' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(42);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(41);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'p') ADVANCE(31);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          (',' <= lookahead && lookahead <= '/') ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '?' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(42);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(41);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          (',' <= lookahead && lookahead <= '/') ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '?' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(42);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(41);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          (',' <= lookahead && lookahead <= '/') ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '?' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(42);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(41);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'x') ADVANCE(27);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          (',' <= lookahead && lookahead <= '/') ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '?' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(42);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          (',' <= lookahead && lookahead <= '/') ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '?' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(42);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_option);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(42);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym__user_token1);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(42);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym__full_uri_token1);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_uri);
      if (sym_uri_character_set_1(lookahead)) ADVANCE(12);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(20);
      if (!aux_sym__text_token1_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == 'm') ADVANCE(53);
      if (!aux_sym__text_token1_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(23);
      if (!aux_sym__text_token1_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(19);
      if (!aux_sym__text_token1_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == 's') ADVANCE(55);
      if (!aux_sym__text_token1_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ':') ADVANCE(3);
      if (!aux_sym__text_token1_character_set_1(lookahead)) ADVANCE(63);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'i') ADVANCE(58);
      if (!aux_sym__text_token1_character_set_2(lookahead)) ADVANCE(63);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'i') ADVANCE(51);
      if (!aux_sym__text_token1_character_set_2(lookahead)) ADVANCE(63);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'm') ADVANCE(52);
      if (!aux_sym__text_token1_character_set_2(lookahead)) ADVANCE(63);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'p') ADVANCE(54);
      if (!aux_sym__text_token1_character_set_2(lookahead)) ADVANCE(63);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 't') ADVANCE(59);
      if (!aux_sym__text_token1_character_set_2(lookahead)) ADVANCE(63);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 't') ADVANCE(60);
      if (!aux_sym__text_token1_character_set_2(lookahead)) ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'x') ADVANCE(50);
      if (!aux_sym__text_token1_character_set_2(lookahead)) ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (!aux_sym__text_token1_character_set_2(lookahead)) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(42);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(42);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(42);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(42);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(42);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(42);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(42);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(42);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(42);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(42);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(42);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(42);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(42);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(42);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(42);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(42);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 15, .external_lex_state = 2},
  [2] = {.lex_state = 15, .external_lex_state = 2},
  [3] = {.lex_state = 15, .external_lex_state = 2},
  [4] = {.lex_state = 14, .external_lex_state = 2},
  [5] = {.lex_state = 14, .external_lex_state = 2},
  [6] = {.lex_state = 0, .external_lex_state = 2},
  [7] = {.lex_state = 0, .external_lex_state = 2},
  [8] = {.lex_state = 14, .external_lex_state = 2},
  [9] = {.lex_state = 0, .external_lex_state = 2},
  [10] = {.lex_state = 13, .external_lex_state = 2},
  [11] = {.lex_state = 14, .external_lex_state = 2},
  [12] = {.lex_state = 13, .external_lex_state = 2},
  [13] = {.lex_state = 15, .external_lex_state = 2},
  [14] = {.lex_state = 15, .external_lex_state = 2},
  [15] = {.lex_state = 15, .external_lex_state = 2},
  [16] = {.lex_state = 15, .external_lex_state = 2},
  [17] = {.lex_state = 15, .external_lex_state = 2},
  [18] = {.lex_state = 15, .external_lex_state = 2},
  [19] = {.lex_state = 15},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 15},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 15},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 15},
  [31] = {.lex_state = 15},
  [32] = {.lex_state = 15},
  [33] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_vi_COLON] = ACTIONS(1),
    [anon_sym_vim_COLON] = ACTIONS(1),
    [anon_sym_ex_COLON] = ACTIONS(1),
    [aux_sym_modeline_token1] = ACTIONS(1),
    [anon_sym_Vim_COLON] = ACTIONS(1),
    [sym_option] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym__full_uri_token1] = ACTIONS(3),
    [sym_uri] = ACTIONS(1),
    [aux_sym__text_token1] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [sym_invalid_token] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(32),
    [sym_tag] = STATE(3),
    [sym_modeline] = STATE(3),
    [sym__full_uri] = STATE(3),
    [sym__text] = STATE(3),
    [sym__stop_char] = STATE(18),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(7),
    [anon_sym_vi_COLON] = ACTIONS(9),
    [anon_sym_vim_COLON] = ACTIONS(9),
    [anon_sym_ex_COLON] = ACTIONS(9),
    [anon_sym_Vim_COLON] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(7),
    [aux_sym__full_uri_token1] = ACTIONS(13),
    [sym_uri] = ACTIONS(15),
    [aux_sym__text_token1] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_LT] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_QMARK] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(7),
    [anon_sym_GT] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(7),
    [sym_name] = ACTIONS(19),
  },
  [2] = {
    [sym_tag] = STATE(2),
    [sym_modeline] = STATE(2),
    [sym__full_uri] = STATE(2),
    [sym__text] = STATE(2),
    [sym__stop_char] = STATE(18),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_vi_COLON] = ACTIONS(26),
    [anon_sym_vim_COLON] = ACTIONS(26),
    [anon_sym_ex_COLON] = ACTIONS(26),
    [anon_sym_Vim_COLON] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(23),
    [aux_sym__full_uri_token1] = ACTIONS(13),
    [sym_uri] = ACTIONS(32),
    [aux_sym__text_token1] = ACTIONS(35),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_QMARK] = ACTIONS(23),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [sym_name] = ACTIONS(38),
  },
  [3] = {
    [sym_tag] = STATE(2),
    [sym_modeline] = STATE(2),
    [sym__full_uri] = STATE(2),
    [sym__text] = STATE(2),
    [sym__stop_char] = STATE(18),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_COLON] = ACTIONS(7),
    [anon_sym_vi_COLON] = ACTIONS(9),
    [anon_sym_vim_COLON] = ACTIONS(9),
    [anon_sym_ex_COLON] = ACTIONS(9),
    [anon_sym_Vim_COLON] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(7),
    [aux_sym__full_uri_token1] = ACTIONS(13),
    [sym_uri] = ACTIONS(15),
    [aux_sym__text_token1] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_LT] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_QMARK] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(7),
    [anon_sym_GT] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(7),
    [sym_name] = ACTIONS(19),
  },
  [4] = {
    [aux_sym_modeline_repeat1] = STATE(9),
    [aux_sym_modeline_repeat2] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_COLON] = ACTIONS(45),
    [anon_sym_vi_COLON] = ACTIONS(43),
    [anon_sym_vim_COLON] = ACTIONS(43),
    [anon_sym_ex_COLON] = ACTIONS(43),
    [aux_sym_modeline_token1] = ACTIONS(47),
    [anon_sym_Vim_COLON] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_RPAREN] = ACTIONS(43),
    [aux_sym__full_uri_token1] = ACTIONS(3),
    [sym_uri] = ACTIONS(43),
    [aux_sym__text_token1] = ACTIONS(49),
    [anon_sym_SLASH] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_LT] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(43),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_QMARK] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(43),
    [anon_sym_GT] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [sym_name] = ACTIONS(43),
  },
  [5] = {
    [aux_sym_modeline_repeat1] = STATE(23),
    [aux_sym_modeline_repeat2] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(51),
    [anon_sym_COLON] = ACTIONS(53),
    [anon_sym_vi_COLON] = ACTIONS(51),
    [anon_sym_vim_COLON] = ACTIONS(51),
    [anon_sym_ex_COLON] = ACTIONS(51),
    [aux_sym_modeline_token1] = ACTIONS(56),
    [anon_sym_Vim_COLON] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(51),
    [aux_sym__full_uri_token1] = ACTIONS(3),
    [sym_uri] = ACTIONS(51),
    [aux_sym__text_token1] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_QMARK] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_RBRACK] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(51),
    [sym_name] = ACTIONS(51),
  },
  [6] = {
    [aux_sym_modeline_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(61),
    [anon_sym_vi_COLON] = ACTIONS(61),
    [anon_sym_vim_COLON] = ACTIONS(61),
    [anon_sym_ex_COLON] = ACTIONS(61),
    [aux_sym_modeline_token1] = ACTIONS(63),
    [anon_sym_Vim_COLON] = ACTIONS(61),
    [sym_option] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_RPAREN] = ACTIONS(67),
    [aux_sym__full_uri_token1] = ACTIONS(3),
    [sym_uri] = ACTIONS(61),
    [aux_sym__text_token1] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_SQUOTE] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_DOT] = ACTIONS(67),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_SEMI] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(67),
    [anon_sym_QMARK] = ACTIONS(67),
    [anon_sym_BSLASH] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(67),
    [anon_sym_RBRACK] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [sym_name] = ACTIONS(61),
  },
  [7] = {
    [aux_sym_modeline_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_COLON] = ACTIONS(69),
    [anon_sym_vi_COLON] = ACTIONS(69),
    [anon_sym_vim_COLON] = ACTIONS(69),
    [anon_sym_ex_COLON] = ACTIONS(69),
    [aux_sym_modeline_token1] = ACTIONS(71),
    [anon_sym_Vim_COLON] = ACTIONS(69),
    [sym_option] = ACTIONS(74),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_RPAREN] = ACTIONS(74),
    [aux_sym__full_uri_token1] = ACTIONS(3),
    [sym_uri] = ACTIONS(69),
    [aux_sym__text_token1] = ACTIONS(74),
    [anon_sym_SLASH] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(74),
    [anon_sym_DQUOTE] = ACTIONS(74),
    [anon_sym_LT] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(74),
    [anon_sym_LBRACE] = ACTIONS(74),
    [anon_sym_DOT] = ACTIONS(74),
    [anon_sym_COMMA] = ACTIONS(74),
    [anon_sym_SEMI] = ACTIONS(74),
    [anon_sym_BANG] = ACTIONS(74),
    [anon_sym_QMARK] = ACTIONS(74),
    [anon_sym_BSLASH] = ACTIONS(74),
    [anon_sym_RBRACE] = ACTIONS(74),
    [anon_sym_RBRACK] = ACTIONS(74),
    [anon_sym_GT] = ACTIONS(74),
    [anon_sym_DASH] = ACTIONS(74),
    [sym_name] = ACTIONS(69),
  },
  [8] = {
    [aux_sym_modeline_repeat1] = STATE(6),
    [aux_sym_modeline_repeat2] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(76),
    [anon_sym_COLON] = ACTIONS(78),
    [anon_sym_vi_COLON] = ACTIONS(76),
    [anon_sym_vim_COLON] = ACTIONS(76),
    [anon_sym_ex_COLON] = ACTIONS(76),
    [aux_sym_modeline_token1] = ACTIONS(80),
    [anon_sym_Vim_COLON] = ACTIONS(76),
    [anon_sym_LPAREN] = ACTIONS(76),
    [anon_sym_RPAREN] = ACTIONS(76),
    [aux_sym__full_uri_token1] = ACTIONS(3),
    [sym_uri] = ACTIONS(76),
    [aux_sym__text_token1] = ACTIONS(82),
    [anon_sym_SLASH] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(76),
    [anon_sym_DQUOTE] = ACTIONS(76),
    [anon_sym_LT] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(76),
    [anon_sym_LBRACE] = ACTIONS(76),
    [anon_sym_DOT] = ACTIONS(76),
    [anon_sym_COMMA] = ACTIONS(76),
    [anon_sym_SEMI] = ACTIONS(76),
    [anon_sym_BANG] = ACTIONS(76),
    [anon_sym_QMARK] = ACTIONS(76),
    [anon_sym_BSLASH] = ACTIONS(76),
    [anon_sym_RBRACE] = ACTIONS(76),
    [anon_sym_RBRACK] = ACTIONS(76),
    [anon_sym_GT] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_name] = ACTIONS(76),
  },
  [9] = {
    [aux_sym_modeline_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(76),
    [anon_sym_COLON] = ACTIONS(76),
    [anon_sym_vi_COLON] = ACTIONS(76),
    [anon_sym_vim_COLON] = ACTIONS(76),
    [anon_sym_ex_COLON] = ACTIONS(76),
    [aux_sym_modeline_token1] = ACTIONS(63),
    [anon_sym_Vim_COLON] = ACTIONS(76),
    [sym_option] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(82),
    [anon_sym_RPAREN] = ACTIONS(82),
    [aux_sym__full_uri_token1] = ACTIONS(3),
    [sym_uri] = ACTIONS(76),
    [aux_sym__text_token1] = ACTIONS(82),
    [anon_sym_SLASH] = ACTIONS(82),
    [anon_sym_SQUOTE] = ACTIONS(82),
    [anon_sym_DQUOTE] = ACTIONS(82),
    [anon_sym_LT] = ACTIONS(82),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(82),
    [anon_sym_DOT] = ACTIONS(82),
    [anon_sym_COMMA] = ACTIONS(82),
    [anon_sym_SEMI] = ACTIONS(82),
    [anon_sym_BANG] = ACTIONS(82),
    [anon_sym_QMARK] = ACTIONS(82),
    [anon_sym_BSLASH] = ACTIONS(82),
    [anon_sym_RBRACE] = ACTIONS(82),
    [anon_sym_RBRACK] = ACTIONS(82),
    [anon_sym_GT] = ACTIONS(82),
    [anon_sym_DASH] = ACTIONS(82),
    [sym_name] = ACTIONS(76),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(61),
    [anon_sym_vi_COLON] = ACTIONS(61),
    [anon_sym_vim_COLON] = ACTIONS(61),
    [anon_sym_ex_COLON] = ACTIONS(61),
    [anon_sym_Vim_COLON] = ACTIONS(61),
    [sym_option] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_RPAREN] = ACTIONS(67),
    [aux_sym__full_uri_token1] = ACTIONS(13),
    [sym_uri] = ACTIONS(61),
    [aux_sym__text_token1] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_SQUOTE] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_DOT] = ACTIONS(67),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_SEMI] = ACTIONS(67),
    [anon_sym_BANG] = ACTIONS(67),
    [anon_sym_QMARK] = ACTIONS(67),
    [anon_sym_BSLASH] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(67),
    [anon_sym_RBRACK] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [sym_name] = ACTIONS(61),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(51),
    [anon_sym_COLON] = ACTIONS(51),
    [anon_sym_vi_COLON] = ACTIONS(51),
    [anon_sym_vim_COLON] = ACTIONS(51),
    [anon_sym_ex_COLON] = ACTIONS(51),
    [aux_sym_modeline_token1] = ACTIONS(51),
    [anon_sym_Vim_COLON] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(51),
    [aux_sym__full_uri_token1] = ACTIONS(3),
    [sym_uri] = ACTIONS(51),
    [aux_sym__text_token1] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(51),
    [anon_sym_QMARK] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_RBRACK] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_DASH] = ACTIONS(51),
    [sym_name] = ACTIONS(51),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(76),
    [anon_sym_COLON] = ACTIONS(76),
    [anon_sym_vi_COLON] = ACTIONS(76),
    [anon_sym_vim_COLON] = ACTIONS(76),
    [anon_sym_ex_COLON] = ACTIONS(76),
    [anon_sym_Vim_COLON] = ACTIONS(76),
    [sym_option] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(82),
    [anon_sym_RPAREN] = ACTIONS(82),
    [aux_sym__full_uri_token1] = ACTIONS(13),
    [sym_uri] = ACTIONS(76),
    [aux_sym__text_token1] = ACTIONS(82),
    [anon_sym_SLASH] = ACTIONS(82),
    [anon_sym_SQUOTE] = ACTIONS(82),
    [anon_sym_DQUOTE] = ACTIONS(82),
    [anon_sym_LT] = ACTIONS(82),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(82),
    [anon_sym_DOT] = ACTIONS(82),
    [anon_sym_COMMA] = ACTIONS(82),
    [anon_sym_SEMI] = ACTIONS(82),
    [anon_sym_BANG] = ACTIONS(82),
    [anon_sym_QMARK] = ACTIONS(82),
    [anon_sym_BSLASH] = ACTIONS(82),
    [anon_sym_RBRACE] = ACTIONS(82),
    [anon_sym_RBRACK] = ACTIONS(82),
    [anon_sym_GT] = ACTIONS(82),
    [anon_sym_DASH] = ACTIONS(82),
    [sym_name] = ACTIONS(76),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(61),
    [anon_sym_vi_COLON] = ACTIONS(61),
    [anon_sym_vim_COLON] = ACTIONS(61),
    [anon_sym_ex_COLON] = ACTIONS(61),
    [anon_sym_Vim_COLON] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_RPAREN] = ACTIONS(61),
    [aux_sym__full_uri_token1] = ACTIONS(13),
    [sym_uri] = ACTIONS(61),
    [aux_sym__text_token1] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [anon_sym_LT] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_DOT] = ACTIONS(61),
    [anon_sym_COMMA] = ACTIONS(61),
    [anon_sym_SEMI] = ACTIONS(61),
    [anon_sym_BANG] = ACTIONS(61),
    [anon_sym_QMARK] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(61),
    [anon_sym_RBRACE] = ACTIONS(61),
    [anon_sym_RBRACK] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(61),
    [sym_name] = ACTIONS(61),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(84),
    [anon_sym_COLON] = ACTIONS(84),
    [anon_sym_vi_COLON] = ACTIONS(84),
    [anon_sym_vim_COLON] = ACTIONS(84),
    [anon_sym_ex_COLON] = ACTIONS(84),
    [anon_sym_Vim_COLON] = ACTIONS(84),
    [anon_sym_LPAREN] = ACTIONS(84),
    [anon_sym_RPAREN] = ACTIONS(84),
    [aux_sym__full_uri_token1] = ACTIONS(13),
    [sym_uri] = ACTIONS(84),
    [aux_sym__text_token1] = ACTIONS(86),
    [anon_sym_SLASH] = ACTIONS(84),
    [anon_sym_SQUOTE] = ACTIONS(84),
    [anon_sym_DQUOTE] = ACTIONS(84),
    [anon_sym_LT] = ACTIONS(84),
    [anon_sym_LBRACK] = ACTIONS(84),
    [anon_sym_LBRACE] = ACTIONS(84),
    [anon_sym_DOT] = ACTIONS(84),
    [anon_sym_COMMA] = ACTIONS(84),
    [anon_sym_SEMI] = ACTIONS(84),
    [anon_sym_BANG] = ACTIONS(84),
    [anon_sym_QMARK] = ACTIONS(84),
    [anon_sym_BSLASH] = ACTIONS(84),
    [anon_sym_RBRACE] = ACTIONS(84),
    [anon_sym_RBRACK] = ACTIONS(84),
    [anon_sym_GT] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(84),
    [sym_name] = ACTIONS(84),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(88),
    [anon_sym_COLON] = ACTIONS(88),
    [anon_sym_vi_COLON] = ACTIONS(88),
    [anon_sym_vim_COLON] = ACTIONS(88),
    [anon_sym_ex_COLON] = ACTIONS(88),
    [anon_sym_Vim_COLON] = ACTIONS(88),
    [anon_sym_LPAREN] = ACTIONS(88),
    [anon_sym_RPAREN] = ACTIONS(88),
    [aux_sym__full_uri_token1] = ACTIONS(13),
    [sym_uri] = ACTIONS(88),
    [aux_sym__text_token1] = ACTIONS(90),
    [anon_sym_SLASH] = ACTIONS(88),
    [anon_sym_SQUOTE] = ACTIONS(88),
    [anon_sym_DQUOTE] = ACTIONS(88),
    [anon_sym_LT] = ACTIONS(88),
    [anon_sym_LBRACK] = ACTIONS(88),
    [anon_sym_LBRACE] = ACTIONS(88),
    [anon_sym_DOT] = ACTIONS(88),
    [anon_sym_COMMA] = ACTIONS(88),
    [anon_sym_SEMI] = ACTIONS(88),
    [anon_sym_BANG] = ACTIONS(88),
    [anon_sym_QMARK] = ACTIONS(88),
    [anon_sym_BSLASH] = ACTIONS(88),
    [anon_sym_RBRACE] = ACTIONS(88),
    [anon_sym_RBRACK] = ACTIONS(88),
    [anon_sym_GT] = ACTIONS(88),
    [anon_sym_DASH] = ACTIONS(88),
    [sym_name] = ACTIONS(88),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(92),
    [anon_sym_COLON] = ACTIONS(92),
    [anon_sym_vi_COLON] = ACTIONS(92),
    [anon_sym_vim_COLON] = ACTIONS(92),
    [anon_sym_ex_COLON] = ACTIONS(92),
    [anon_sym_Vim_COLON] = ACTIONS(92),
    [anon_sym_LPAREN] = ACTIONS(92),
    [anon_sym_RPAREN] = ACTIONS(92),
    [aux_sym__full_uri_token1] = ACTIONS(13),
    [sym_uri] = ACTIONS(92),
    [aux_sym__text_token1] = ACTIONS(94),
    [anon_sym_SLASH] = ACTIONS(92),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [anon_sym_DQUOTE] = ACTIONS(92),
    [anon_sym_LT] = ACTIONS(92),
    [anon_sym_LBRACK] = ACTIONS(92),
    [anon_sym_LBRACE] = ACTIONS(92),
    [anon_sym_DOT] = ACTIONS(92),
    [anon_sym_COMMA] = ACTIONS(92),
    [anon_sym_SEMI] = ACTIONS(92),
    [anon_sym_BANG] = ACTIONS(92),
    [anon_sym_QMARK] = ACTIONS(92),
    [anon_sym_BSLASH] = ACTIONS(92),
    [anon_sym_RBRACE] = ACTIONS(92),
    [anon_sym_RBRACK] = ACTIONS(92),
    [anon_sym_GT] = ACTIONS(92),
    [anon_sym_DASH] = ACTIONS(92),
    [sym_name] = ACTIONS(92),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(96),
    [anon_sym_COLON] = ACTIONS(96),
    [anon_sym_vi_COLON] = ACTIONS(96),
    [anon_sym_vim_COLON] = ACTIONS(96),
    [anon_sym_ex_COLON] = ACTIONS(96),
    [anon_sym_Vim_COLON] = ACTIONS(96),
    [anon_sym_LPAREN] = ACTIONS(96),
    [anon_sym_RPAREN] = ACTIONS(96),
    [aux_sym__full_uri_token1] = ACTIONS(13),
    [sym_uri] = ACTIONS(96),
    [aux_sym__text_token1] = ACTIONS(98),
    [anon_sym_SLASH] = ACTIONS(96),
    [anon_sym_SQUOTE] = ACTIONS(96),
    [anon_sym_DQUOTE] = ACTIONS(96),
    [anon_sym_LT] = ACTIONS(96),
    [anon_sym_LBRACK] = ACTIONS(96),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_DOT] = ACTIONS(96),
    [anon_sym_COMMA] = ACTIONS(96),
    [anon_sym_SEMI] = ACTIONS(96),
    [anon_sym_BANG] = ACTIONS(96),
    [anon_sym_QMARK] = ACTIONS(96),
    [anon_sym_BSLASH] = ACTIONS(96),
    [anon_sym_RBRACE] = ACTIONS(96),
    [anon_sym_RBRACK] = ACTIONS(96),
    [anon_sym_GT] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [sym_name] = ACTIONS(96),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(100),
    [anon_sym_COLON] = ACTIONS(100),
    [anon_sym_vi_COLON] = ACTIONS(100),
    [anon_sym_vim_COLON] = ACTIONS(100),
    [anon_sym_ex_COLON] = ACTIONS(100),
    [anon_sym_Vim_COLON] = ACTIONS(100),
    [anon_sym_LPAREN] = ACTIONS(100),
    [anon_sym_RPAREN] = ACTIONS(100),
    [aux_sym__full_uri_token1] = ACTIONS(13),
    [sym_uri] = ACTIONS(100),
    [aux_sym__text_token1] = ACTIONS(102),
    [anon_sym_SLASH] = ACTIONS(100),
    [anon_sym_SQUOTE] = ACTIONS(100),
    [anon_sym_DQUOTE] = ACTIONS(100),
    [anon_sym_LT] = ACTIONS(100),
    [anon_sym_LBRACK] = ACTIONS(100),
    [anon_sym_LBRACE] = ACTIONS(100),
    [anon_sym_DOT] = ACTIONS(100),
    [anon_sym_COMMA] = ACTIONS(100),
    [anon_sym_SEMI] = ACTIONS(100),
    [anon_sym_BANG] = ACTIONS(100),
    [anon_sym_QMARK] = ACTIONS(100),
    [anon_sym_BSLASH] = ACTIONS(100),
    [anon_sym_RBRACE] = ACTIONS(100),
    [anon_sym_RBRACK] = ACTIONS(100),
    [anon_sym_GT] = ACTIONS(100),
    [anon_sym_DASH] = ACTIONS(100),
    [sym_name] = ACTIONS(100),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(106), 1,
      aux_sym__full_uri_token1,
    STATE(15), 1,
      sym__end_char,
    ACTIONS(104), 13,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_BANG,
      anon_sym_QMARK,
      anon_sym_BSLASH,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_GT,
  [22] = 4,
    ACTIONS(13), 1,
      aux_sym__full_uri_token1,
    ACTIONS(108), 1,
      anon_sym_COLON,
    ACTIONS(110), 1,
      sym_option,
    STATE(22), 1,
      aux_sym_modeline_repeat3,
  [35] = 4,
    ACTIONS(13), 1,
      aux_sym__full_uri_token1,
    ACTIONS(112), 1,
      anon_sym_COLON,
    ACTIONS(114), 1,
      anon_sym_LPAREN,
    STATE(30), 1,
      sym__user,
  [48] = 4,
    ACTIONS(13), 1,
      aux_sym__full_uri_token1,
    ACTIONS(116), 1,
      anon_sym_COLON,
    ACTIONS(118), 1,
      sym_option,
    STATE(22), 1,
      aux_sym_modeline_repeat3,
  [61] = 4,
    ACTIONS(3), 1,
      aux_sym__full_uri_token1,
    ACTIONS(121), 1,
      aux_sym_modeline_token1,
    ACTIONS(123), 1,
      sym_option,
    STATE(24), 1,
      aux_sym_modeline_repeat1,
  [74] = 4,
    ACTIONS(3), 1,
      aux_sym__full_uri_token1,
    ACTIONS(69), 1,
      sym_option,
    ACTIONS(125), 1,
      aux_sym_modeline_token1,
    STATE(24), 1,
      aux_sym_modeline_repeat1,
  [87] = 3,
    ACTIONS(13), 1,
      aux_sym__full_uri_token1,
    ACTIONS(128), 1,
      aux_sym_modeline_token2,
    ACTIONS(130), 1,
      sym_option,
  [97] = 3,
    ACTIONS(13), 1,
      aux_sym__full_uri_token1,
    ACTIONS(132), 1,
      sym_option,
    STATE(20), 1,
      aux_sym_modeline_repeat3,
  [107] = 2,
    ACTIONS(3), 1,
      aux_sym__full_uri_token1,
    ACTIONS(134), 1,
      aux_sym__user_token1,
  [114] = 2,
    ACTIONS(13), 1,
      aux_sym__full_uri_token1,
    ACTIONS(136), 1,
      anon_sym_RPAREN,
  [121] = 2,
    ACTIONS(13), 1,
      aux_sym__full_uri_token1,
    ACTIONS(128), 1,
      aux_sym_modeline_token3,
  [128] = 2,
    ACTIONS(13), 1,
      aux_sym__full_uri_token1,
    ACTIONS(138), 1,
      anon_sym_COLON,
  [135] = 2,
    ACTIONS(13), 1,
      aux_sym__full_uri_token1,
    ACTIONS(140), 1,
      anon_sym_COLON,
  [142] = 2,
    ACTIONS(13), 1,
      aux_sym__full_uri_token1,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
  [149] = 2,
    ACTIONS(13), 1,
      aux_sym__full_uri_token1,
    ACTIONS(123), 1,
      sym_option,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(19)] = 0,
  [SMALL_STATE(20)] = 22,
  [SMALL_STATE(21)] = 35,
  [SMALL_STATE(22)] = 48,
  [SMALL_STATE(23)] = 61,
  [SMALL_STATE(24)] = 74,
  [SMALL_STATE(25)] = 87,
  [SMALL_STATE(26)] = 97,
  [SMALL_STATE(27)] = 107,
  [SMALL_STATE(28)] = 114,
  [SMALL_STATE(29)] = 121,
  [SMALL_STATE(30)] = 128,
  [SMALL_STATE(31)] = 135,
  [SMALL_STATE(32)] = 142,
  [SMALL_STATE(33)] = 149,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(18),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(25),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(29),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(19),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(18),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(21),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modeline, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modeline, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modeline_repeat2, 2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modeline_repeat2, 2), SHIFT_REPEAT(33),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modeline_repeat2, 2), SHIFT_REPEAT(23),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_modeline_repeat2, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modeline, 4),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modeline, 4),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modeline_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modeline_repeat1, 2), SHIFT_REPEAT(7),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_modeline_repeat1, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modeline, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modeline, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end_char, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__end_char, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__full_uri, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__full_uri, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__text, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modeline_repeat3, 2),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modeline_repeat3, 2), SHIFT_REPEAT(22),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modeline_repeat1, 2), SHIFT_REPEAT(24),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__user, 3),
  [142] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_name = 0,
  ts_external_token_invalid_token = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_name] = sym_name,
  [ts_external_token_invalid_token] = sym_invalid_token,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_name] = true,
    [ts_external_token_invalid_token] = true,
  },
  [2] = {
    [ts_external_token_name] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_comment_external_scanner_create(void);
void tree_sitter_comment_external_scanner_destroy(void *);
bool tree_sitter_comment_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_comment_external_scanner_serialize(void *, char *);
void tree_sitter_comment_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_comment() {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_comment_external_scanner_create,
      tree_sitter_comment_external_scanner_destroy,
      tree_sitter_comment_external_scanner_scan,
      tree_sitter_comment_external_scanner_serialize,
      tree_sitter_comment_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
