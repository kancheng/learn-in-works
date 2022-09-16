$(document).ready(function() {

  $('.menu li').click(function(event) {
    /* Act on the event */
    // $(this).addClass('active');
    $(this).toggleClass('active');
  });
});