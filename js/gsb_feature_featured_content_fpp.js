(function ($) {
  Drupal.behaviors.gsb_feature_featured_content_fpp = {
    attach: function (context, settings) {
      console.log($("input[name$='field-feature-type-und-none']"));
      $("input[id$='field-feature-type-und-none']", context).hide();
      $("label[for$='field-feature-type-und-none']").hide();
     /*  $(':input[name="field_featured_item[und][1][field_feature_type][und]"]').change(function () {
        if ($(this).val() == 'nid') {
          $('#edit-field-featured-item-und-1-field-existing-node-fpp-ref-und-0-target-id--2').val('');
        }
        else {
          $('#edit-field-featured-item-und-1-field-existing-node-fpp-ref-und-0-target-id--2').val('');
        }
      }); */
    }
  }
})(jQuery);