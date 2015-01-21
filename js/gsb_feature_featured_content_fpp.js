(function ($) {
  Drupal.behaviors.gsb_feature_featured_content_fpp = {
    attach: function (context, settings) {
      $('input[name$="[field_feature_type][und]"]').change(function () {
        var key = this.id.match(/\d+/);
        if ($(this).val() == 'nid') {
          $('#edit-field-featured-item-und-'+key+'-field-title-und-0-value').val('');
          $('#edit-field-featured-item-und-'+key+'-field-link-single-und-0-url').val('');
          $('input[name="field_featured_item[und]['+key+'][field_icon][und]"]').removeAttr('checked');
        }
        else {
          $('#edit-field-featured-item-und-'+key+'-field-icon-und-written').attr('checked', 'checked');
          $('#edit-field-featured-item-und-'+key+'-field-featured-content-fpp-ref-und-0-target-id').val('');
        }
      });
    }
  }
})(jQuery);
