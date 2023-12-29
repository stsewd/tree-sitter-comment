const END_CHARS = [
  ".",
  ",",
  ":",
  ";",
  "!",
  "?",
  "\\",
  "'",
  '"',
  "}",
  "]",
  ")",
  ">",
];

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

  conflicts: ($) => [
    [$._simple_tag, $._tag_with_annotation],
  ],

  rules: {
    source: ($) => repeat(
      choice(
        $.tag,
        $.uri,
        $._text,
      ),
    ),

    tag: ($) => choice(
      $._simple_tag,
      $._normal_tag,
      $._tag_with_annotation,
    ),

    _simple_tag: ($) => alias($._tag_name, $.name),

    _normal_tag: ($) => seq(
      alias($._tag_name, $.name),
      token.immediate(":"),
    ),

    _tag_with_annotation: ($) => seq(
      alias($._tag_name, $.name),
      "(",
      optional(alias(/[^()]+/, $.annotation)),
      ")",
      token.immediate(":"),
    ),

    _tag_name: ($) => /[A-Z]([A-Z0-9_-]*[A-Z0-9])?/,

    // This token needs to be single regex, otherwise a partial match will result in an error.
    uri: ($) => get_uri_regex(),

    // Text tokens can be a single character, or a sequence of characters that aren't stop characters.
    _text: ($) => choice($._stop_char, notmatching(STOP_CHARS)),
    _stop_char: ($) => choice(...STOP_CHARS),
    _end_char: ($) => choice(...END_CHARS),
  },
});

/**
 * Get a regex that matches a URI.
 *
 * A URI matches if:
 *
 * - It starts with http:// or https://
 * - It contains at least one character that isn't whitespace or an end character.
 * - If it contains an end character, it must be followed by a letter or number (.com).
 * - It doesn't end with a whitespace or an end character (this marks the end of the URI).
 *
 * An end character is a character that marks the end of a sentence.
 */
function get_uri_regex() {
  let end_chars = escapeRegExp(END_CHARS.join(""));
  return new RegExp(
    `https?://([^\\s${end_chars}]|[${end_chars}][a-zA-Z0-9])+`
  );
}

/**
 * Match any characters that aren't whitespace or that aren't in the given list.
 */
function notmatching(chars) {
  chars = escapeRegExp(chars.join(""));
  return new RegExp(`[^\\s${chars}]+`);
}

/**
 * Escape a string for use in a regular expression.
 *
 * Taken from https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Regular_Expressions#escaping.
 */
function escapeRegExp(string) {
  return string.replace(/[.*+?^${}()|[\]\\]/g, "\\$&");
}
