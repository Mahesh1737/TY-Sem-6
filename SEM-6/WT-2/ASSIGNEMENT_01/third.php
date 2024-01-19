<?php

  if(isset($_COOKIE['style'])){
    $st=$_COOKIE['style'];
  }
  if(isset($_COOKIE['color'])){
    $color=$_COOKIE['color'];
  }
  if(isset($_COOKIE['size'])){
    $size=$_COOKIE['size'];
  }
    if(isset($_COOKIE['bgcolor'])){
    $bgcolor=$_COOKIE['bgcolor'];
  }

?>

<html>
<head>
<title>Final Webpage</title>
<style>
body{
    background-color:<?php echo$bgcolor ?>;   
}

p{
  font-style:<?php echo$st?>;
  font-size:<?php echo$size?>;
  color:<?php echo$color?>;
}
</style>
</head>
<body>
<p>hey, This is your current result!</p>
</body>
</html>
