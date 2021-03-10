<?php
 include("db_con.php");
 
 $sql="Select Course from PlacementPrepration ORDER BY Course ASC";
 $run=mysqli_query($con,$sql);

 $a=array();
 if($run>0)
 {
   
   
   while($data=mysqli_fetch_assoc($run))
   {
           $flag=0;
           for($i=0;$i<count($a);$i++){
                   if($a[$i]==$data['Course'])
                   {
                         $flag=1;  
                   }
           }
           
           if($flag==0){
           array_push($a,$data['Course']);
           }
   }
   
  }
  
  
  for($j=0;$j<count($a);$j++){
         
         $course=$a[$j];
         $sql="Select Subject from PlacementPrepration Where Course='$course' ORDER BY Subject ASC";
         $run=mysqli_query($con,$sql);

         if($run>0)
         {
           $an=array();
           
                   while($data=mysqli_fetch_assoc($run))
                   {
                           $flag=0;
                           for($i=0;$i<count($an);$i++){
                                   if($an[$i]==$data['Subject'])
                                   {
                                         $flag=1;  
                                   }
                           }
                           
                           if($flag==0){
                           echo $data['Subject'].";";
                           array_push($an,$data['Subject']);
                           }
                   }
                   echo "NextQ;";
           }
           
  }
  $con->close(); 
?>