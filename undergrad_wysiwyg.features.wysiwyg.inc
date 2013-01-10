<?php
/**
 * @file
 * undergrad_wysiwyg.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function undergrad_wysiwyg_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: content_editor_text_format
  $profiles['content_editor_text_format'] = array(
    'format' => 'content_editor_text_format',
    'editor' => 'ckeditor',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Outdent' => 1,
          'Indent' => 1,
          'Undo' => 1,
          'Redo' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'Image' => 1,
          'Cut' => 1,
          'Copy' => 1,
          'PasteFromWord' => 1,
          'RemoveFormat' => 1,
          'Format' => 1,
          'Styles' => 1,
          'Table' => 1,
          'SpellChecker' => 1,
        ),
      ),
      'toolbar_loc' => 'top',
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'resizing' => 1,
      'verify_html' => 1,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 1,
      'apply_source_formatting' => 1,
      'paste_auto_cleanup_on_paste' => 1,
      'block_formats' => 'p,h2,h3,h4',
      'css_setting' => 'self',
      'css_path' => '%bsites/default/themes/open_framework/bootstrap/css/bootstrap.css, %bsites/default/themes/open_framework/css/open_framework.css , %bsites/default/themes/stanford_framework/css/stanford_framework.css, %b%t/css/undergrad.css, %bsites/default/modules/stanford/undergrad_wysiwyg/css/editor.css',
      'css_classes' => 'Big Red Numbered List=ol.big-red-list
Links List=ul.links-list
Red Uppercase=p.red-uppercase
Red Uppercase=h2.red-uppercase
Red Uppercase=h3.red-uppercase
Red Uppercase=span.red-uppercase
Summary Paragraph=p.summary
Summary Span=span.summary
Descriptor Paragraph=p.descriptor
Descriptor Span=span.descriptor
Light Descriptor Paragraph=p.descriptor-light
Light Descriptor Span=span.descriptor-light
More Link=a.more-link
Red Button=a.btn-red
No Border=p.border-none',
    ),
    'metatags' => array(),
    'rdf_mapping' => array(),
  );

  return $profiles;
}
