/*void CalError()  //คำนวณ error
{
  Convert3Analog();
  if ((L1==1)&&(C==1)&&(R1==0)) Error=-1;
  else if ((L1==1)&&(C==1)&&(R1==1)) Error=0;
  else if ((L1==0)&&(C==1)&&(R1==1)) Error=1;
  else if (C==0) Error=100;
}

void TrackPID(int MotorSpeed) //เคลื่อนที่ตามช่องแบบ PID
{
 int Output,LeftOutput,RightOutput,MaxSpeed=100;
 TuneMotor(MotorSpeed);
  Output = (Kp*Error)+(Ki*Integral)+Kd*(Error-PreError);
  
  LeftOutput = LlftSpeed+Output;
  RightOutput = RightSpeed-Output;
  if (LeftSpeed>MaxSpeed) LeftOutput = MaxSpeed;
  if (LeftSpeed<-MaxSpeed) LeftOutput = -MaxSpeed;
  if (RightSpeed>MaxSpeed) RightOutput = MaxSpeed;
  if (RightSpeed<-MaxSpeed) RightOutput = -MaxSpeed;
  motor(1,LeftOutput);
  motor(2,LeftOutput);
  motor(3,RightOutput);
  motor(4,RightOutput);
  PreError = Error;
  Integral += Error;
  }

  void TrackJC(int MotorSpeed ,int Time) //เจอแยกแล้วหยุด
  {
  int Status = 0;
  Error = 0 ;
  PreError=0;
  Integral=0;
  Convert3Analog();
  while (Status==0)
  {
    TrackPID(MotorSpeed);
    CalError();
    if(Error>=100)
    Status=1;
    
  }
   MotorStop ();
  // Backward(MotorSpeed,400);
  // MotorStop ();
   //ForwardBalance();
  //delay(Time);
  //MotorStop ();
  }

void TrackJCBalance(int MotorSpeed ,int Time) //เจอแยกแล้วหยุด
  {
  int Status = 0;
  Error = 0 ;
  PreError=0;
  Integral=0;
  while (Status == 0)
  {
    TrackPID(MotorSpeed);
    CalError();
  
    if (Error>=100) Status=1;
  }
  
   MotorStop ();
   Backward(MotorSpeed,250);
   MotorStop ();
   //ForwardBalance();
   //MotorStop ();
 // BackwardBalance();
 // delay(Time);
 // MotorStop ();
  }*/

  void TrackSpeedTimer(int MotorSpeed ,int Time) //เเทรกตามเวลาที่กำหนด
  {
  int Status=0;  
  startTimer0();
  Convert3Analog();
  while (Status==0)
  {
    Forward(MotorSpeed,10);
    //CalError();
    TrackLane_Stop();
    ReadTimer0();
    if(Timer0>=Time)
    
    Status=1;    
  }
   
  }
