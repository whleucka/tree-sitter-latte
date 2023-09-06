module.exports = grammar({
  name: 'latte',

  rules: {
    template: $ => repeat(
      $.content
    ),

    content: $ => choice(
      $.layout_tag, 
      $.import_tag, 
      $.define_tag, 
      $.include_tag, 
      $.comment
    ),

    /** Layout tag **/
    layout_tag: $ => seq(
      choice('{layout', '{extends'),
      $.file_path,
      optional(seq(
        $.var_name,
        '?',
        $.condition,
        ':',
        $.condition
      )),
      '}'
    ),
    var_name: $ => /\$[A-z]+/,
    condition: $ => /[^\}]+/,

    /** Import tag **/
    import_tag: $ => seq(
      '{import',
      $.file_path,
      '}'
    ),

    /** Define tag **/
    define_tag: $ => seq(
      '{define',
      $.block_name,
      '}'
    ),

    /** Include tag **/
    include_tag: $ => seq(
      '{include',
      $.block_name,
      '}'
    ),
    
    block_name: $ => /[^\}]+/,
    file_path: $ => /[^\}]+/,
    comment: () => seq('{*', /[^#]*\#+([^\}#][^#]*\#+)*/, '*}'),
  }
});

