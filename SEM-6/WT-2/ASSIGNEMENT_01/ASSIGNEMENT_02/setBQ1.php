<?php
     
     $xml = simplexml_load_file("bookstore.xml");
     echo"<pre>";
     
     echo"</pre>";
     foreach($xml->book as $k)
     {
         echo"Book No :".$k->bookno."<br>";
         echo"Book Name :".$k->bname."<br>";
         echo"Author Name :".$k->aname."<br>";
         echo"Price :".$k->price."<br>";
         echo"Year :".$k->year."<br>";
         echo"<hr>";
     }
?>
