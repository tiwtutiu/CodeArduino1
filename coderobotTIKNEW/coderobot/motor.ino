void MotorStop()   //มอเตอร์หยุดทำงาน ทุกตัว
{
  AO();
  delay(200);
  }
 /* void TuneMotor(int MotorSpeed)   //ปรับจูนมอเตอร์  ให้วิ่งตรง
  {
    if(MotorSpeed<=60)
    {
    LeftSpeed = MotorSpeed-5;   //เอียงขวา
    RightSpeed = MotorSpeed -0;  //เอียงซ้าย
  
    LeftSpeedBack = MotorSpeed-0;   //เอียงขวา
    RightSpeedBack = MotorSpeed -0;  //เอียงซ้าย
     }
    else  //ความเร็วมากกว่า 60
        {
    LeftSpeed = MotorSpeed-5;   //เอียงขวา       
    RightSpeed = MotorSpeed -0;  //เอียงซ้าย
  
    LeftSpeedBack = MotorSpeed-0;   //เอียงขวา
    RightSpeedBack = MotorSpeed -0;  //เอียงซ้าย
*/

void Forward(int MotorSpeed,int Time) //เดินหน้า
  {
    
   fd2(MotorSpeed-0,MotorSpeed-0);
   // motor(1,MotorSpeed-);
    //motor(2,MotorSpeed-5);
    //motor(3,MotorSpeed-0);
    //motor(4,MotorSpeed-0);
    delay(Time);
  }

    void Backward(int MotorSpeed,int Time) //ถอยหลัง
  {
    bk2(MotorSpeed-0,MotorSpeed-10);
   // motor(1,-30);
   // motor(2,-30);
   // motor(3,-30);
   // motor(4,-30);
    delay(Time);
    
  }

  void TurnLeft()  //เลี้ยวซ้าาย
  {
  //  MotorStop ();
  Forward(RobotSpeed,780);   
  sl(TurnSpeed);
      delay(1140);
  //  MotorStop (); 
    
    
    }
  void TurnRight()  //เลี้ยวขวา
  {
  //  MotorStop ();
Forward(RobotSpeed,780);  
   sr(TurnSpeed);
  
    delay(1140);
   // MotorStop (); 
    
    
    }

  void R90()  //เลี้ยวขวา
  {
  //  MotorStop ();
  Forward(RobotSpeed,820);  
  
  
  sr(60);sleep(400);
 while(R1==1){sr(60);sleep(100);}
 MotorStop ();
 while(L1==0){sr(60);sleep(100);} 
    }
      
    
    void UTurn()  //เลี้ยวซ้าาย
  {
    //MotorStop ();   
    sr(TurnSpeed);
    delay(270);
   // MotorStop (); 
    
    
    }
