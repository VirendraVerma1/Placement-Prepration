<?php

        include("db_con.php");
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
        
        $sql="INSERT INTO PlacementPrepration (Course, Subject, Ques, Option1, Option2, Option3, Option4, Explanation, Correct, Company, Publisher, YoutubeLink, Date) VALUES ('$Course', '$Subject', '$Ques', '$Option1', '$Option2', '$Option3', '$Option4', '$Explanation', '$Correct', '$Company','$Publisher', '$YoutubeLink', '$date')";
       
	if ($con->query($sql) === TRUE)
        {
          $last_id = $con->insert_id;   
         
                echo "success:".$last_id;
        }
	else{
                echo("Error description: " . $con -> error);
        }
        $con->close(); 

?>