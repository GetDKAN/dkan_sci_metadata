(function ($) {
  Drupal.behaviors.dkan_sci_citation = {
    // Context here allows your function to run on ajax calls
    attach: function(context, settings) {
      
      $citations = $('.field-name-field-metadata-extended tr.paragraphs-item-type-sci-citation td:not([class]),td[class=""]');
      
      $citations.each(function() {
        var $doi = $(this).find('.field-name-field-dkan-cite-doi input.form-text');      
        var $bibtex = $(this).find('.field-name-field-dkan-cite-bibtex textarea.form-textarea');
        
        // First check to see if either field in this set has a value.
        // If so, hide the other field.
        if ($doi.val()) {
          $bibtex.parents('.field-name-field-dkan-cite-bibtex').hide();
        } else if ($bibtex.val()) {
          $doi.parents('.field-name-field-dkan-cite-doi').hide();
        }
        
        // Now add on input events for each field.
        // If the field receives input and isn't empty, hide its sibling.
        $doi.on('input',function(e){
          if ($(this).val() != "") {
            $bibtex.parents('.field-name-field-dkan-cite-bibtex').hide();
          } else {
            $bibtex.parents('.field-name-field-dkan-cite-bibtex').show();
          }
        });
        
        $bibtex.on('input',function(e){
          if ($(this).val() != "") {
            $doi.parents('.field-name-field-dkan-cite-doi').hide();
          } else {
            $doi.parents('.field-name-field-dkan-cite-doi').show();
          }
        });
        
      });
      
    }
  };
})(jQuery);
