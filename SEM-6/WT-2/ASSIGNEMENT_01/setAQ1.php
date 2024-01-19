<?php
  
  session_start();

  if(isset($_SESSION['cn'])){
    $_SESSION['cn']+=1;
  }
  else{
    $_SESSION['cn']=1;
  }
  $msg = "The web page has been access".$_SESSION['cn'];
  $msg.="Times";
?>

<html>
<body>
   <?php echo"<br>".$msg."<br>";?>
</body>
</html>

