(function ($) {
  Drupal.behaviors.dkan_sci_citation = {
    // Context here allows your function to run on ajax calls
    attach: function (context, settings) {

      // No other practical way to override this paragraph form label for USDA.
      // Php would require foreach nesting 3 deep, and paragraphs api is
      // unfriendly (did try, but was unsuccessful via php).
      if (Drupal.settings.citations.themeName === 'ag_data') {
        $(".field-name-field-alt-object-id label:contains('Alternate Object ID')").html("PubAg  ID");
        // Hide the citations field on the form.
        $(".field-name-field-dkan-cite-data.field-widget-text-textarea").hide();
      }

      $('#dataset-node-form').once(function () {
        $(this).prepend('<div id="citation-results"></div>');
      })

      function clickHandler() {
        $('.citation-preview').click(function () {
          var citationVal,
            citationtype;
          console.log('clicked');
          // Get our query params from inputs.
          if ($(this).parent().siblings('.field-name-field-dkan-cite-doi').children().children().children('input').val()) {
            citationVal = $(this).parent().siblings('.field-name-field-dkan-cite-doi').children().children().children('input').val();
            citationtype = 'doi';
          }
          if ($(this).parent().siblings('.field-name-field-dkan-cite-bibtex').children().children().children().children('textarea').val()) {
            citationVal = $(this).parent().siblings('.field-name-field-dkan-cite-bibtex').children().children().children().children('textarea').val();
            citationtype = 'bibtex';
          }

          // Build our query to the menu hook path.
          var queryString = 'citation=' + encodeURIComponent(citationVal) + '&type=' + citationtype;
          $('#citation-results').load('/citation-preview?' + queryString, function () {
            $(this).addClass('activated');
            $(this).prepend('<span class="close-citation">x</span>');

            // Close the modal, wipe it clean.
            $('.close-citation').click(function () {
              $('#citation-results').removeClass('activated').empty();
            });
          });
        });
      }

      $('.field-name-field-dkan-cite-data-view').hide();

      var buttonHtml = '<input type="button" value="Preview" class="form-submit btn btn-default citation-preview">';
      $citations = $('.field-name-field-metadata-extended tr.paragraphs-item-type-sci-citation td:not([class]),td[class=""]');

      $citations.each(function () {
        var $doi = $(this).find('.field-name-field-dkan-cite-doi input.form-text');
        var $bibtex = $(this).find('.field-name-field-dkan-cite-bibtex textarea.form-textarea');

        // First check to see if either field in this set has a value.
        // If so, hide the other field.
        if ($doi.val()) {
          $bibtex.parents('.field-name-field-dkan-cite-bibtex').hide();
        }
        else if ($bibtex.val()) {
          $doi.parents('.field-name-field-dkan-cite-doi').hide();
        }

        // Now add on input events for each field.
        // If the field receives input and isn't empty, hide its sibling.
        $doi.on('input', function (e) {
          if ($(this).val() != "") {
            $bibtex.parents('.field-name-field-dkan-cite-bibtex').hide();
          }
          else {
            $bibtex.parents('.field-name-field-dkan-cite-bibtex').show();
          }
          // Add our preview button logic to this.
          if ($(this).parent().parent().parent().siblings('.form-actions.form-wrapper').children('.citation-preview').length < 1) {
            $(this).once().parent().parent().parent().siblings('.form-actions.form-wrapper').append(buttonHtml);
          }
          clickHandler();
        });

        $bibtex.on('input', function (e) {

          if ($(this).val() != "") {
            $doi.parents('.field-name-field-dkan-cite-doi').hide();
          }
          else {
            $doi.parents('.field-name-field-dkan-cite-doi').show();
          }

          // Add our preview button logic to this.
          if ($(this).parent().parent().parent().parent().siblings('.form-actions.form-wrapper').children('.citation-preview').length < 1) {
            $(this).once().parent().parent().parent().parent().siblings('.form-actions.form-wrapper').append(buttonHtml);
          }
          clickHandler();
        });


      });

    }
  };
})(jQuery);
