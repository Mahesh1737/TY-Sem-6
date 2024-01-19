<?php
  $fstyle=$_GET['fstyle'];
  $fsize=$_GET['fsize'];
  $fcolor=$_GET['fcolor'];
  $bgcolor=$_GET['bgcolor'];
  
  setcookie('style',$fstyle);
  setcookie('size',$fsize);
  setcookie('color',$fcolor);
  setcookie('bgcolor',$bgcolor);
?>

<html>
<head>
<title>Second page</title>
</head>
<body>

<p>The Inmformation Is : </p>
<?php  
   echo"The font Style : ".$fstyle."<br>";
   echo"The font Size : ".$fsize."<br>";
   echo"The font Color : ".$fcolor."<br>";
   echo"The font Bgcolor : ".$bgcolor."<br>";
?>
<form action="third.php" method="GET">
Press submit to show Implementation:<br>
<input type="submit" name="send"><br>
</form>
</body>
</html>
