<?php
 include("db_con.php");
 
 $sql="Select Course from PlacementPrepration ORDER BY Course ASC";
 $run=mysqli_query($con,$sql);

 if($run>0)
 {
   $a=array();
   
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
           echo $data['Course'].";";
           array_push($a,$data['Course']);
           }
   }
   
  }
  $con->close(); 
?>