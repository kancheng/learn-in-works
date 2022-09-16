$(document).ready(function() {

  // 字體放大
  $('.font-b').click(function(event) {
    /* Act on the event */
    event.preventDefault();
    $('.content p').css('font-size','20px');
  });

  // 字體放中
  $('.font-m').click(function(event) {
    /* Act on the event */
    event.preventDefault();
    $('.content p').css('font-size','16px');
  });

  // 字體放小
  $('.font-s').click(function(event) {
    /* Act on the event */
    event.preventDefault();
    $('.content p').css('font-size','13px');
  });

  // close效果
  $('.ad-close').click(function(event) {
    /* Act on the event */
    event.preventDefault();
    $(".ad").fadeOut();

  });

});