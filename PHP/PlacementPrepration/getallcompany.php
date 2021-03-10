<?php
 include("db_con.php");
 
 $sql="Select Company from PlacementPrepration ORDER BY Company ASC";
 $run=mysqli_query($con,$sql);

 if($run>0)
 {
   $a=array();
   
   while($data=mysqli_fetch_assoc($run))
   {
           $flag=0;
           for($i=0;$i<count($a);$i++){
                   if($a[$i]==$data['Company'])
                   {
                         $flag=1;  
                   }
           }
           
           if($flag==0){
           echo $data['Company'].";";
           array_push($a,$data['Company']);
           }
   }
   
   
  }
  $con->close(); 
?>