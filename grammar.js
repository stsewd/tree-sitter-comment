const NEWLINE = /\r?\n/;
const STOP_CHARS = [
  "/",
  "'",
  '"',
  "<",
  "(",
  "[",
  "{",
  ".",
  ",",
  ":",
  ";",
  "!",
  "?",
  "\\",
  "}",
  "]",
  ")",
  ">",
  // This must be last, so that it isn't interpreted as a range.
  "-",
];

module.exports = grammar({
  name: "comment",

  externals: ($) => [$.name, $.invalid_token],

  extras: ($) => [$.__newline, /\s/],

  rules: {
    source: ($) => repeat(
      choice(
        $.tag,
        alias($._text, "text"),
      ),
    ),

    tag: ($) => seq(
      $.name,
      optional($._user),
      ":",
    ),

    _user: ($) => seq(
      "(",
      alias(/[^()]+/, $.user),
      ")",
    ),

    _text: ($) => choice($._stop_char, notmatching(STOP_CHARS)),
    _stop_char: ($) => choice(...STOP_CHARS),

    // HACK: for some reason this needs be assigned to a token,
    // otherwise isn't recognized as an extra.
    __newline: ($) => NEWLINE,
  },
});

/**
 * Match any characters that aren't whitespace or that aren't in the given list.
 */
function notmatching(chars) {
  chars = chars.join("");
  return new RegExp(`[^\r\n\\s${escapeRegExp(chars)}]+`);
}

/**
 * Escape a string for use in a regular expression.
 *
 * Taken from https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Regular_Expressions#escaping.
 */
function escapeRegExp(string) {
  return string.replace(/[.*+?^${}()|[\]\\]/g, "\\$&");
}
