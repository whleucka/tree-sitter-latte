module.exports = grammar({
  name: 'latte',

  rules: {
    source_file: $ => repeat($._element),

    _element: $ => choice(
      $.layout_tag,
      $.block_tag,
      $.text
    ),

    layout_tag: $ => seq(
      '{layout',
      $.layout_path,
      '}'
    ),

    layout_path: $ => /[^\}]+/,

    block_tag: $ => seq(
      '{block',
      optional($.filter),
      '}',
      repeat($._element),
      '{/block}'
    ),

    filter: $ => seq('|', /[^\}]+/),

    text: $ => /[^{]+/,
  }
});
