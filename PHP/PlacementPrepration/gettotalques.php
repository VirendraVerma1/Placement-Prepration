<?php
include("db_con.php");
        $sql="Select ID from PlacementPrepration";
        $run=mysqli_query($con,$sql);
        
        if($run>0)
        {
           $rowcount=mysqli_num_rows($run);
           echo $rowcount;
        }
        $con->close(); 
?>