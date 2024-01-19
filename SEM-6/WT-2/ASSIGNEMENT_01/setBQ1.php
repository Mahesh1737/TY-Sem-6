<?php
  session_start();
  $cnt=0;
  if($_SERVER['REQUEST_METHOD']=='POST'){
     $user = $_POST['Uname'];
     $pass = $_POST['pass'];
     if($user=="Mahesh" and $pass=="123"){
    
     $_SESSION['username'] = $user;
     
     echo"<form fieldset=1>
          Welcome to my World...........
          </form>";
     }
     else{
         $cnt = isset($_SESSION['attempt']) ? $_SESSION['attempt'] : 0;
         echo"Its Your ".$cnt."try";
         $cnt++;
     
         if($cnt >3){
            echo"<br> Error... too many Unsuccessful attempts<br>";
            session_destroy();
         }
         else
            $_SESSION['attempt'] = $cnt;
    }
  }       
?>
