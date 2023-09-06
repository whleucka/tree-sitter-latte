const REGEX_NAME = /[a-zA-Z_\x7f-\xff][a-zA-Z0-9_\x7f-\xff]*/;

module.exports = grammar({
  name: 'latte',

  rules: {
    template: $ => repeat(
      choice($.layout_tag, $.block_tag)
    ),

    layout_tag: $ => seq(
      '{layout',
      $.layout_path,
      '}'
    ),

    block_tag: $ => seq(
      '{block',
      optional($.content),
      '{/block}'
    ),

    layout_path: $ => /[^\}]+/,
    _name: () => REGEX_NAME,
    content: $ => /[^{]+/
  }
});
