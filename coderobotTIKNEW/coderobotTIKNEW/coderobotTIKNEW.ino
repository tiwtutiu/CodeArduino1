#include <POP32.h>
int L1,C,R1; //เซนเซอร์หน้า
int BL1,BR1; //เซนเซอร์หลัง
int RefL1=300,RefL2=300,RefL2=300C=2439;
int RefBL1=2844,RefBR1=2814;
int RobotSpeed=60,SlowSpeed=10,AccSpeed=80,TurnSpeed=90,LeftSpeed,RightSpeed;
 int LeftSpeedBack,RightSpeedBack;
 int Kp=10,Ki=0,Kd=30,Error,PreError,Integral;
 long BaseTimer0,Timer0;
 int i=1;
void setup()
{
   sw_OK_press();
  // Wait for OK button
  delay(100);

 MotorStop();
 //FD2(30,30);
 //sleep(600);
//TrackLane_Stop();
 //tracklane();
 //ForwardBalance();
 //BackwardBalance();
 Box1();
 //Box2();
 //TrackSpeedTimer(RobotSpeed,300);
 //TrackSpeedTimer(SlowSpeed,150);
 //Forward(SlowSpeed,300);
 MotorStop();
}

void loop()
{
  //Box1();
 //ShowAnalog();
//  TurnLeft();
  //Box1();
 
}
