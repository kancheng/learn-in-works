$(document).ready(function() {
  $('.menu li').click(function(event) {
    /* Act on the event */
    // $(this).addClass('active');
    $(this).addClass('active').siblings().removeClass('active');
  });
});