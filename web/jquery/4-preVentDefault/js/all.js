$(document).ready(function() {
 $('.close').click(function(event) {
   /* Act on the event */
   event.preventDefault();
   $('.box').slideUp();
 });
});