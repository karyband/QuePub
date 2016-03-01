    function scrollpage(x) {
       $('html,body').animate({
        scrollTop: $("."+x).offset().top},
        'slow');
    }

    

$( document ).ready(function() {
//transition logo size on scroll down
    $(window).scroll(function(){
      if($(document).scrollTop() > 0) {
          $('.l-brand').addClass('reduce');
     } else {
        $('.l-brand').removeClass('reduce');
    }
    });

  if ($(window).width() < 800){
    $('.l-brand').addClass('reduce');
  } 

  else {
        $('.l-brand').removeClass('reduce');
  }


});