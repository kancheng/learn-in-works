$(document).ready(function() {
  $('.button').click(function(event) {
    $('.text').fadeToggle(1000);
    // fadeIn 預設隱藏的東西給打開
    // fadeOut 預設開啟的東西給關閉
  });
  // lightbox 效果
  lightbox.option({
        'resizeDuration': 2000,
        'wrapAround': true
      });
  $(window).load(function() {
      $('#slider').nivoSlider(); 
  });
});