<?php

$tname=$_POST['n'];
$con=pg_connect("host=192.168.1.254 dbname=ty21 user=ty21 password=ty21");
if (!$con)
    echo"<br>Unsuccessful <br>";
else
    echo"<br> Successful Connection <br>";

echo "<br><br>";
    
$qry="SELECT * FROM ord,cust WHERE  cust.cid=ord.cid and cust.cnm='$tname'";
$ret=pg_query($con,$qry) or die("Error in the query");

if($ret)
{
   echo"<table border=1>";
   
   echo"<tr>
            <th>Oid</th>
            <th> cid  </th>
            <th>Odics</th>
            <th>Odate</th>
        </tr>";
      while ($row=pg_fetch_row($ret))
      {
            echo"<tr>";
            echo"<td>".$row[0]."</td>";
            echo"<td>".$row[1]."</td>";
            echo"<td>".$row[2]."</td>";
            echo"<td>".$row[3]."</td>";
            echo"</tr>";
      }   
      echo"</table>";   
}        
else
    echo"Error";
pg_close($con);   

?> 
