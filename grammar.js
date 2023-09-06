module.exports = grammar({
  name: 'latte',

  rules: {
    template: $ => repeat(
      choice($.include_tag, $.layout_tag, $.comment, $.block_tag, $.html_tag, $.expression_tag, $.text)
    ),

    layout_tag: $ => seq(
      '{layout',
      $.file_path,
      '}'
    ),

    file_path: $ => /[^\}]+/,

    block_tag: $ => seq(
      '{block',
      $.block_name,
      '}',
      repeat($.block_content),
      '{/block}'
    ),

    block_name: $ => /[^\}]+/,
    block_content: $ => choice($.text, $.layout_tag, $.comment, $.html_tag, $.expression_tag),

    include_tag: $ => seq(
      '{include',
      $.include_file_path,
      ',',
      $.include_options,
      '}'
    ),

    include_file_path: $ => /[^,]+/,
    include_options: $ => /[^}]+/,

    expression_tag: $ => seq(
      '{',
      $.expression_name,
      '}'
    ),
    expression_name: $ => /[^\}]+/,

    comment: () => seq('{*', /[^#]*\#+([^\}#][^#]*\#+)*/, '*}'),

    html_tag: $ => seq(
      '<',
      /[^\{\}>]+/, // Match HTML tag name (excluding '{', '}', and '>')
      '>',
      repeat(choice($.text, $.expression_tag)), // Allow text and expressions within the tag
      '</',
      /[^\{\}>]+/, // Match closing tag name (excluding '{', '}', and '>')
      '>'
    ),

    text: $ => /[^{}<]+/, // Match any text that is not inside curly braces or HTML tags
  }
});

