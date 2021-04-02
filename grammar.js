const WHITE_SPACE = choice(" ", "\t", "\v", "\f");
const NEWLINE = /\r?\n/;

module.exports = grammar({
  name: "comment",

  externals: $ => [
    $.name,
    $._text,
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

    __newline: $ => NEWLINE,
    __whitespace: $ => token(WHITE_SPACE),
  },
});
