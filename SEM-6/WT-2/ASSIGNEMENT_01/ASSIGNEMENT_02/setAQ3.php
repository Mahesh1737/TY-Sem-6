<?php
     $str=<<<XML
     <?xml version="1.0" encoding="ISO-8859-1"?>
     
     
     <?xml version="1.0" encoding="UTF-8" ?>

     <bookinfo>
     <book>
     <bookno>1</bookno>
     <bname>JAVA</bname>
     <aname>Balguru swami</aname>
     <price>250</price>
     <year>2006</year>
     </book>

     <book>
     <bookno>2</bookno>
     <bname>C</bname>
     <aname>Denis ritchie</aname>
     <price>500</price>
     <year>1971</year>
     </book>

     </bookinfo>
          
     XML;
        $fname="bookstore.xml";
        $fp=fopen($fname,"w");
        fwrite($fp,$str);
        fclose($fp);
        echo"Created Filename is : ".$fname;
?>
