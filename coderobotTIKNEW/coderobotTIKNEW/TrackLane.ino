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
     case 4:   ForwardBalance();Forward(RobotSpeed,5500);         break;
     case 5:  Forward(RobotSpeed,1000);       break;   
     case 6:  TurnRight();      break;
     case 7:  TurnRight();      break;
     case 8:  Forward(AccSpeed,1000); MotorStop();       break;
     case 9:  Forward(RobotSpeed,300);  MotorStop();      break;
               
    }
    i++;
    
  }
  
  else if((L1||L2==0)&&(R1||R2==1)){sl(50);  sleep(30);} 
  else if((L1||L2==1)&&(R1||R2==0)){sr(50);  sleep(30);}    
  else if((L1==1)&&(R1==1)){ Forward(RobotSpeed,40);}
  
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
    Backward(RobotSpeed,80);
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
  
  else if((L1==0)&&(C==1)&&(R1==1)){TR(30);  sleep(20);} 
  else if((L1==1)&&(C==1)&&(R1==0)){TL(30);  sleep(20);}    
  else  if((L1==1)&&(C==1)&&(R1==1)){ Forward(SlowSpeed,10);}
  
}  
}}
void tracklane(){
    while(true){
     
        if(C==0) {AO();sleep(1000);break;}
        else if((L1==1)&&(C==1)&&(R1==1)) {FD(40);sleep(1);}
        else if((L1==0)&&(C==1)&&(R1==1)) {SR(20);sleep(1);}
        else if((L1==1)&&(C==1)&&(R1==0)) {SL(20);sleep(1);}
    }
}
