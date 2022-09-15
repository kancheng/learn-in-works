$(document).ready(function() {
  $('.open').click(function(event) {
    /* Act on the event */
    $('.box1').delay(0).fadeIn();
    $('.box2').delay(1000).slideDown();
    $('.box3').delay(2000).show(0);
  });
});