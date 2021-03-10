<?php

        include("db_con.php");
        $id=$_POST['id'];
        $Course=$_POST['Course'];
        $Subject=$_POST['Subject'];
        $Ques=$_POST['Ques'];
        $Option1=$_POST['Option1'];
        $Option2=$_POST['Option2'];
        $Option3=$_POST['Option3'];
        $Option4=$_POST['Option4'];
        $Explanation=$_POST['Explanation'];
        $Correct=$_POST['Correct'];
        $Company=$_POST['Company'];
        $Publisher=$_POST['Publisher'];
        $YoutubeLink=$_POST['YoutubeLink'];
        
        date_default_timezone_set('India/Delhi');
        $date=date('Y/m/d H:i:s');
        $sql="UPDATE PlacementPrepration SET Course = '$Course', Subject= '$Subject', Ques= '$Ques', Option1= '$Option1', Option2= '$Option2', Option3= '$Option3', Option4= '$Option4', Explanation= '$Explanation', Correct= '$Correct', Company= '$Company', Publisher='$Publisher', YoutubeLink= '$YoutubeLink' WHERE ID = '$id'";
        //$sql="INSERT INTO PlacementPrepration (Course, Subject, Ques, Option1, Option2, Option3, Option4, Explanation, Correct, Company, YoutubeLink, Date) VALUES ('$Course', '$Subject', '$Ques', '$Option1', '$Option2', '$Option3', '$Option4', '$Explanation', '$Correct', '$Company', '$YoutubeLink', '$date')";
       
	if ($con->query($sql) === TRUE)
        {
          
                 echo "success:";
        }
	else{
                echo "error";
        }
        $con->close(); 

?>