const WHITE_SPACE = choice(" ", "\t", "\v", "\f");
const NEWLINE = /\r?\n/;

module.exports = grammar({
  name: "comment",

  externals: $ => [
    $.name,
    $._text,
    $._url,
  ],

  extras: $ => [
    $.__newline,
    $.__whitespace,
  ],

  rules: {
    source: $ => repeat(
      choice(
        $.tag,
        alias($._text, "text"),
        alias($._url, $.url),
      ),
    ),

    tag: $ => seq(
      $.name,
      optional($._user),
      ':',
    ),

    _user: $ => seq(
      '(',
      alias(/[^()]+/, $.user),
      ')',
    ),

    __newline: _ => NEWLINE,
    __whitespace: _ => token(WHITE_SPACE),
  },
});
