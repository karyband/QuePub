<div class="colophon-unit full-height unit-padding">
    <div class="page-unit">
        <h1>Colophon</h1>
        <section class="row">
        <h3>Principles of Page Design</h3>
         <h5>1. Single Page Layout Design</h5>
         <p class="indent"><span class="bold">Description: </span> 
	         The weak point of my project 1 was the design and the display of the text so for this project I wanted to 
	        	focus on presenting the information on my website with good design principles and aesthetics. When I
	        	had been doing my research on web design principles, I came across articles that were about single page
	        	web designs which can help your webpage be more intuitive, eliminate clutter, achieve a clean look, and retain
	        	visitors (<a href="http://www.designfloat.com/blog/2013/08/07/one-page-layout-web-design-trend/">1</a>). 
	         </p>
	        <blockquote class="indent">
	        	"If you’re setting up a site that would only have a handful of pages anyway, then a single page site might be perfect. Condensing everything onto one page can give the overall site a more modern look, and if it’s light on content anyway, then a single page site can make it look like it has more substance" (<a href="http://www.webdesignerdepot.com/2014/12/how-to-design-the-perfect-single-page-website/">2</a>).
	        </blockquote>
         <p class="indent">
        	<span class="bold">Problem & Fix: </span> 
	        	Since my webpage is for a restaurant and only needs a handful of pages, I decided I wanted to build my project 2 with the single-page layout design to produce a better design. So all the information is in one page with the colophon page included so that it falls into the design of the webpage as well. Besides the landing page information, the menu, play, contact, and colophon are insterted in the mainpage through php includes where each is a different includes file.
	        	Although it is a single page, it still follows the requirements of having 
	        	an "index" page which acts as the index page to the rest of the site (the main-unit class that is the homepage).
	        	The navigation also shows where the user can go and where they are as it responds to the scroll of the page through
	        	the jQuery I have added to menu-highlighter.js using a window.scroll function that responds to when the user has
	        	scrolled into one of the main webpage divs and highlights the corresponding navigation item. The php includes, not
	        	including the includes of the different pages, are the header, footer, and now the credits too to simply the pages that I had
	        	to only include the necessary ones. <br>
        	<span class="bold">Area: </span> 
        		Throughout the whole website.

        </p>


        <h5>2. Consistency</h5>
        <p class="indent">
        	<span class="bold">Description: </span> 
        		Be consistent with your design choices and styling.<br>

        	<span class="bold">Problem & Fix: </span> 
        		My layout between different pages were different. This time the different pages are consistent through the use
        		of cover image backgrounds, the size of the text is consistent through CSS between corresponding elements in different pages,
        		the text area is the same with a transparent black background with consistent alignment between the different pages using bootstrap
        		classes such as "row" to align the elements, and h1 titles in the same spot in all the pages.<br>

        	<span class="bold">Area: </span>
        		Throughout the whole website.
        </p>


        <h5>3. Visual Hierarchy</h5>
        <p class="indent">
        	<span class="bold">Description: </span>
        		Elements should be presented with a visual arrangement that clearly depicts the importance of the different elements. This can be achieved through the size, colors, styling, and order.<br>

        	<span class="bold">Problem & Fix: </span>
        		The order of the webpages included in the one page is in order of what is important in my restaurant website- The landing page
        		that depicts the most crucial info about it, followed by the menu page for food and drinks, the play page which is the distinguishing
        		feature between my restaurant and others out there, the contact page since it already reiterates some information that is known, and then this page describing my changes. <br>
        		In the landing page, the three columns of information are of equal importance so they have consistent styling. In the menu page the
        		section titles have popping red banners to help distinguish what the three columns are. In the play page the Happy hours alert is
        		in bold and outlined in red since it is important information. In the contact page, the different contact information is bolded and the
        		job posting title has a popping red background as this is important info people often look for in business sites contact pages.<br>
        		In the landing page the title of the restaurant is very imporant and I have made it appear large but when the user scrolls it minimizes
        		using a javascript scroll function that adds the class .reduce to the logo to reduce the size so the navigation doesn't take too much
        		space in the rest of the website.<br>

        	<span class="bold">Area: </span>
        		Throughout the whole website.
        </p>


		<h5>4. Typefaces</h5>
        <p class="indent">
        	<span class="bold">Description: </span>
        		Pick types of fonts that are easy to read and simple. In general since Sans Serif are the fonts without decorative finishes, they are easier to read. For articles, 16px is a good reading size. Keep it simple, don’t add too many different typefaces and font sizes.<br>


			<span class="bold">Problem & Fix: </span>
				I have added Open Sans and Lato fonts using Google Fonts which are both easy to read and sans-serif. The Lato is used for regular
				text and is kept at 16px while some 18px if the element needs to pop a bit more in the visual hierarchy such as with .bold.	
				Open sans is used for the header type of elements with different font-sizes for the visual hierarchy.<br>

			<span class="bold">Area: </span>
				Throughout the whole website.

			
		</p>


		<h5>5. Colors</h5>
        <p class="indent">
        	<span class="bold">Description: </span>
        		Choose a color palette that compliments each other for the elements and keep it readable and not overwhelming. <br>

			<span class="bold">Problem & Fix: </span>
				The red color on the aside in my project 1 was too bright for such a big section. Although
				I am still consistent and using black, red, and white as my base colors throughout the site,
				I'm leaving the bright red color for important elements to keep the overwhelming color at a 
				minimum but still match my restaruant colors. Text background color is kept black to contrast with 
				the white font color.<br>

			<span class="bold">Area: </span>
				Throughout the whole website.
			
		</p>


		<h5>6. Mobile Responsive</h5>
        <p class="indent">
        	<span class="bold">Description: </span>
        		Have your webpage respond dynamically adjust to different screen sizes.<br>


			<span class="bold">Problem & Fix: </span>
				I did address this in project 1 but since my style and arrangement of the elements changed a lot because of the single page
				layout, I needed to make sure that my website was kept mobile responsive. This time around I utitilized Bootstrap's grid
				classes that already are programmed to respond to different widths for the columns I have placed throughout the website. For
				the embed elements of the youtube and google map, I added the class .img-responsive to make sure the width stayed 100% of the 
				column that it is nested in so that it to will stay responsive with the column changes. <br>


			<span class="bold">Area: </span>
				Throughout the whole website.
			
		</p>



		<h5>7. Z-style Layout</h5>
        <p class="indent">
        	<span class="bold">Description: </span>
        		Place items on the page in a Z shape, with the elements you want them to see first along the top and then naturally
        		following a path of a Z shape.<br>


			<span class="bold">Problem & Fix: </span>
				The sections in my project 1 were competing for visual hierarchy because of the red color I choose to put on the aside.
				Through the use of the Z style and its effectiveness on non-text heavy pages, I have placed the elements based on importance
				in a Z style on all the different sections of the website besides the Colophon because it is text heavy.<br>


			<span class="bold">Area: </span>
				Throughout the whole website excluding colophon.
			
		</p>

				
	    <h5>8. HICKS LAW/ECONOMIZE</h5>
        <p class="indent">
        	<span class="bold">Description: </span>
        		Less means more, only keep the essential. Having too many options can make it difficult on the user to navigate through.<br>

			<span class="bold">Problem & Fix: </span>	
				Since I was having the whole website on one page, the information that I had before on the home page was unnecessary. Instead,
				the user will scroll down to learn about it more. Therefore, the landing page should have the most essential information and 
				since this is a restaurant, that means its location, hours, and phone number. For the contact page, in order to continue with
				a simple and clear design, I felt that my photo was unnecessary too and would break the flow of my design but the necessary information
				is still there. The credits page also doesn't need to be a full page either and I have opted to just have a small section above
				the footer to display the credits for the media objects I have used. <br>

			<span class="bold">Area: </span>
				Index(landing) page, credits on footer, and contact page. 
			
		</p>
		
		<h5>9. Images</h5>
        <p class="indent">
        	<span class="bold">Description: </span>
        		Include images in appropriate places as humans can process images faster than text and it can also add value to what the text is saying that’s around it.<br>


			<span class="bold">Problem & Fix: </span>	
				The three columns of the landing page have corresponding icons to what information is in what text. All the background images correspond
				to what information is being relayed in that section. 


			<span class="bold">Area: </span>
				Throughout the whole website.
			
		</p>
				


		<h3>Web Fonts</h3>
		<p>The Web Fonts I have installed are from Google fonts: <a href="https://www.google.com/fonts#QuickUsePlace:quickUse/Family:Lato:400,700,900">Lato</a> and <a href="https://www.google.com/fonts#QuickUsePlace:quickUse/Family:Open+Sans:600,700">Open Sans</a>. <br>
		Both of these fonts were used because they are easy to read and sans-serif.
		Open Sans is the header font and Lato is the font that is used for the regular text throughout the whole website. For Open Sans
		only the 600 and 700 are used and in Lato only the 400, 700, and 900. The combined Google Page Load impact meter for both is 105.

		</p>

		<h3>Javascript Library</h3>
		<p>Since I took out the slider library I used in project 1 because of my landing page changes, the new library I am using in project 2
		is <a href="https://scrollrevealjs.org/">Scroll Reveal</a> which does scroll animations. The way I have incorporated this library is
		that the webpages slide in when scrolling when the user first visits the page.



		</p>
		</section>
    </div>
</div>