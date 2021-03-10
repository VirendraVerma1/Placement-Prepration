<?php
 include("db_con.php");
 
 $subject=$_POST['Subject'];
 
 $sql="Select * from PlacementPrepration Where Subject='$subject'";
 $run=mysqli_query($con,$sql);

 if($run>0)
 {
   
   while($data=mysqli_fetch_assoc($run)){
   echo "Course:".$data['Course']."|Subject:".$data['Subject']."|Ques:".$data['Ques']."|Option1:".$data['Option1']."|Option2:".$data['Option2']."|Option3:".$data['Option3']."|Option4:".$data['Option4']."|Explanation:".$data['Explanation']."|Correct:".$data['Correct']."|Company:".$data['Company']."|Publisher:".$data['Publisher']."|YoutubeLink:".$data['YoutubeLink'].";";
   }
 }
 $con->close(); 
 ?>
   