<!doctype html>
<!--[if lt IE 7]>      <html class="no-js lt-ie9 lt-ie8 lt-ie7" lang=""> <![endif]-->
<!--[if IE 7]>         <html class="no-js lt-ie9 lt-ie8" lang=""> <![endif]-->
<!--[if IE 8]>         <html class="no-js lt-ie9" lang=""> <![endif]-->
<!--[if gt IE 8]><!--> <html class="no-js" lang=""> <!--<![endif]-->
    <head>
        <meta charset="utf-8">
        <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <title>Que Pub</title>
        <meta name="description" content="Que Pub is a Bistro type Pub in Rochester, NY. Known for its drinks and games. Here is the homepage of Que Pub.">
        <meta name="viewport" content="width=device-width, initial-scale=1">

        <link rel="apple-touch-icon" href="img/apple-touch-icon.png">

        <link rel="stylesheet" href="css/bootstrap.min.css">

        <link rel="stylesheet" href="css/bootstrap-theme.min.css">
        <link rel="stylesheet" href="css/main.css">



        <link href='https://fonts.googleapis.com/css?family=Bad+Script' rel='stylesheet' type='text/css'>
        <link rel="stylesheet" href="css/override.css">

        <script src="js/vendor/modernizr-2.8.3-respond-1.4.2.min.js"></script>

        <link href='https://fonts.googleapis.com/css?family=Open+Sans:700,600' rel='stylesheet' type='text/css'>
        <link href='https://fonts.googleapis.com/css?family=Lato:400,700,900' rel='stylesheet' type='text/css'>
    </head>
    <body>
        <!--[if lt IE 8]>
            <p class="browserupgrade">You are using an <strong>outdated</strong> browser. Please <a href="http://browsehappy.com/">upgrade your browser</a> to improve your experience.</p>
        <![endif]-->

        <div class="main-unit full-height">

            <header> 
                 <?php include "inc/navbar.inc"; ?>
            </header>

        
             <div id="details" class="full-height">
                <section class="align-bottom">
                    <div class="col-xs-4 center">
                        <img src="img/gps6.svg" alt="location" class="marker"><br>
                        <p>2232 S. Elmwood St.<br>Rochester, NY 14627</p>
                    </div>
                    <div class="col-xs-4 center">
                        <img src="img/clock104.svg" alt="clock" class="marker"><br>
                        <p>Sunday:   10am - 1am<br>
                        Monday:   12pm - 1am<br>
                        Tues-Fri:  12pm - 3am<br>
                        Saturday: 10am - 3am<br></p>
                    </div>
                    <div class="col-xs-4 center">
                        <img src="img/auricular6.svg" alt="phone" class="marker"><br>
                        <p>Call us at:<br>
                        585-783-7776</p>
                    </div>
                </section>>
             </div>

        </div>

        <?php include "inc/menu.inc"; ?>
        
        <?php include "inc/play.inc"; ?>
    
        <?php include "inc/contact.inc"; ?>

        <?php include "inc/colophon.inc"; ?>





        <?php include "inc/credits.inc"; ?>
        <?php include "inc/footer.inc"; ?>


        <script src="//ajax.googleapis.com/ajax/libs/jquery/1.11.2/jquery.min.js"></script>
        <script>window.jQuery || document.write('<script src="js/vendor/jquery-1.11.2.min.js"><\/script>')</script>

        <script src="js/vendor/bootstrap.min.js"></script>

        
        <script src="js/menu-highlighter.js"></script>
        <script src="js/main.js"></script>
        <script src="js/scrollreveal.min.js"></script>
        <script>window.sr=ScrollReveal().reveal('.menu-unit, .play-unit, .contact-unit', { distance:'-40px'} );</script>
           


    </body>
</html>
