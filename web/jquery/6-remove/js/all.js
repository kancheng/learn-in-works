$(document).ready(function() {
  $('.remove').click(function(event) {
    /* Act on the event */
    $(this).parent().parent().hide();
  });
});