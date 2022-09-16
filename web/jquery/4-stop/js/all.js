$(document).ready(function() {
  $('.start').click(function(event) {
    /* Act on the event */
    $('.box').stop().slideToggle(3000);
  });
});