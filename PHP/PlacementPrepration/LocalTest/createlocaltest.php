<?php

        include("../db_con.php");
        
        $subject=$_POST['Subject'];
        $company=$_POST['Company'];
        
        $subjectArray=explode(";",$subject);
        $companyArray=explode(";",$company);
        
        $sqlString="Select * from PlacementPrepration where ";
        $s="";
        for($i=0;$i<count($subjectArray)-1;$i++)
        {
                                
                if($i<count($subjectArray)-2)
                {
                       $s= $s." Subject = '$subjectArray[$i]' OR ";
                }else{
                        $s= $s." Subject = '$subjectArray[$i]' ";
                }
        
        }
        
        $sqlString =$sqlString." ( ".$s.") AND ";
        $s="";
        for($i=0;$i<count($companyArray)-1;$i++)
        {
                if($i<count($companyArray)-2)
                {
                       $s= $s." Company = '$companyArray[$i]' OR ";
                }else{
                        $s= $s." Company = '$companyArray[$i]' ";
                }
        
        }
        $sqlString =$sqlString." ( ".$s.")";
        
        $run=mysqli_query($con,$sqlString);

        if($run>0)
        {
        
                 $rowcount=mysqli_num_rows($run);
                 printf("Result set has %d rows.\n",$rowcount);
        }else{
        echo $sqlString."<br>";
                if (!$con -> query($sqlString)) {
                  echo("Error description: " . $con -> error);
                }


        }
        $con -> close();
?>