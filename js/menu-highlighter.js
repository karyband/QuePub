// This script depends on jQuery (jQuery must be installed before this runs)
// This script assumes you created some CSS to style the ".current" class
// Optional: in HTML, manually assign the ".current" class to the Homepage link in the navigation
	// - needed if there is no match
	// - the manually entered ".current" class will be removed automatically if a match is found

// Step 1: grab the current "location" (URL) of this webpage and put it in a variable
var currentPage=document.location.href;

// Step 2: check each anchor in the navigation element...
$("nav a").click(function() {

	// Step 2a: if there's a match...


		// Step 2a-a: remove the default if there is one somewhere else
		$("nav a[class='current']").removeClass("current");

		// Step 2a-b: add the "current" class to the anchor
		$(this).addClass("current");
	
});


$(window).scroll(function() {

  var mT = $('.menu-unit').offset().top,
       mH = $('.menu-unit').outerHeight(),
       pT = $('.play-unit').offset().top,
       pH = $('.play-unit').outerHeight(),
       cT = $('.contact-unit').offset().top,
       cH = $('.contact-unit').outerHeight()
       coT = $('.colophon-unit').offset().top,
       coH = $('.colophon-unit').outerHeight();

//-50 to account for the navbar on top which hides a bit of the previous page
if (Math.floor(mT)-50 >= $(window).scrollTop()){
       $("nav a[class='current']").removeClass("current");
   }      

   if (Math.floor(mT)-50 <= $(window).scrollTop() && (Math.floor(mT)+mH >= $(window).scrollTop())){
       $("nav a[class='current']").removeClass("current");
       $("#menu-nav").addClass("current");
   }

   if (Math.floor(pT)-50 <= $(window).scrollTop() && (Math.floor(pT)+pH >= $(window).scrollTop())){
       $("nav a[class='current']").removeClass("current");
       $("#play-nav").addClass("current");
   }   


   if (Math.floor(cT)-50 <= $(window).scrollTop() && (Math.floor(cT)+cH >= $(window).scrollTop())){
       $("nav a[class='current']").removeClass("current");
       $("#contact-nav").addClass("current");
   }   

   if (Math.floor(coT)-50 <= $(window).scrollTop() && (Math.floor(coT)+coH >= $(window).scrollTop())){
       $("nav a[class='current']").removeClass("current");
       $("#colophon-nav").addClass("current");
   }   

});
