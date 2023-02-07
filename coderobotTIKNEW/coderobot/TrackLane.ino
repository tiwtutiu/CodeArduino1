void TrackLane_Stop()
{
  int Status=0;
{

 while (Status==0)
 {
  Convert3Analog();
  if((L1==0)&&(R1==0))
  {
    MotorStop();
   
   switch (i)
    {       
     case 1: TurnLeft();        break;
     case 2:  TurnLeft();      break;
     case 3:   TurnRight();       break;
     case 4:   Forward(RobotSpeed,5500);         break;
     case 5:  Forward(RobotSpeed,1000);       break;   
     case 6:  TurnRight();      break;
     case 7:  TurnRight();      break;
     case 8:  Forward(RobotSpeed,500);       break;
     case 9:  Forward(RobotSpeed,300);       break;
               
    }
    i++;
    
  }
  
  else if((L1==0)&&(R1==1)){sl(50);  sleep(30);} 
  else if((L1==1)&&(R1==0)){sr(50);  sleep(30);}    
  else  if((L1==1)&&(R1==1)){ Forward(RobotSpeed,40);}
  
}  
}}
void TrackLane_S()
{
  int Status=0;
{

 while (Status==0)
 {
  Convert3Analog();
  if(C==0)
  {
    MotorStop();
   
   // MotorStop();
   // TurnRight();
   // TurnLeft();
    Status=1;
   /*switch (i)
    {       
     case 1:can();            break;
     case 2:ff(100);          break;
     case 3:l1();             break;
     case 4:r1();             break;
     case 5:ff(100);          break;             
    }
    i++;
    */
  }
  
  else if((L1==0)&&(R1==1)){tr(30);  sleep(20);} 
  else if((L1==1)&&(R1==0)){tl(30);  sleep(20);}    
  else  if((L1==1)&&(R1==1)){ Forward(SlowSpeed,10);}
  
}  
}}
void tracklane(){
    while(true){
     
        if(C==0) {ao();sleep(1000);break;}
        else if((L1==1)&&(C==1)&&(R1==1)) {fd(40);sleep(1);}
        else if((L1==0)&&(C==1)&&(R1==1)) {sr(20);sleep(1);}
        else if((L1==1)&&(C==1)&&(R1==0)) {sl(20);sleep(1);}
    }
}
