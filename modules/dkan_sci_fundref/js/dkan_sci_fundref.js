(function ($) {
  Drupal.behaviors.fundrefTaxonomyForm = {
    attach: function (context, settings) {
      // Variables to hold original help text.
      var name_help_original = $('.form-item-name .help-block').html();
      var doi_help_original = $('.form-item-field-dkan-sci-fundref-doi-und-0 .help-block').html();

      $('#taxonomy-form-term', context).once('taxonomy_form_term', function () {
        // Autocomplete for name field.
        $('#edit-name').on('autocompleteSelect', function () {
          var url = '/dkan_sci_fundref/funder_search/' + encodeURIComponent($('#edit-name').val());

          $.getJSON(url, function (data) {
            if (data) {
              var funder = data[0];

              // Set the help text on name to the DOI
              var name_help = 'Funder DOI: <a href="' + funder.uri + '" target="_blank">' + funder.uri + '</a>';
              $('.form-item-name .help-block').html(name_help);

              // Set the DOI URL based on the name.
              $('#edit-field-dkan-sci-fundref-doi-und-0-url').val(funder.uri);
            }
            else {
              alert('Could not determine DOI from name!');
            }
          });
        });

        // Set DOI help text to show Funder Name, set name field.
        $('#edit-field-dkan-sci-fundref-doi-und-0-url').change(function () {
          var doi_url = $('#edit-field-dkan-sci-fundref-doi-und-0-url').val();
          var url = '/dkan_sci_fundref/funder_lookup?doi_url=' + encodeURIComponent(doi_url);

          if (doi_url.length) {
            $.getJSON(url, function (data) {
              if (data) {
                var doi_help = 'Funder Name: <a href="' + data.uri + '" target="_blank">' + data.name + '</a>';

                // Set the help text on name to the DOI
                $('.form-item-field-dkan-sci-fundref-doi-und-0 .help-block').html(doi_help);

                // Set the Name field based on the DOI URL
                $('#edit-name').val(data.name);
              }
              else {
                alert('Could not determine name from DOI URL!');
              }
            });
          }
          else {
            $('.form-item-field-dkan-sci-fundref-doi-und-0 .help-block').html(doi_help_original);
          }
        });

        $('#edit-name').change(function () {
          var name_field = $('#edit-name').val();
          if (!name_field.length) {
            $('.form-item-name .help-block').html(name_help_original);
          }
        });
      });
    }
  }
})(jQuery);
