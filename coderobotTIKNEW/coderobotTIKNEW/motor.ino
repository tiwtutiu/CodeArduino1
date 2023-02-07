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
    
   FD2(MotorSpeed-0,MotorSpeed-0);
   // motor(1,MotorSpeed-);
    //motor(2,MotorSpeed-5);
    //motor(3,MotorSpeed-0);
    //motor(4,MotorSpeed-0);
    delay(Time);
  }

    void Backward(int MotorSpeed,int Time) //ถอยหลัง
  {
    BK2(MotorSpeed-0,MotorSpeed-0);
   // motor(1,-30);
   // motor(2,-30);
   // motor(3,-30);
   // motor(4,-30);
    delay(Time);
    
  }

  void TurnLeft()  //เลี้ยวซ้าาย
  {
  //  MotorStop ();   
  SL(TurnSpeed);
  //  motor(1,-80);
  //  motor(2,-80);
   // motor(3,80);
   // motor(4,80);
    delay(110);
  //  MotorStop (); 
    
    
    }
  void TurnRight()  //เลี้ยวขวา
  {
  //  MotorStop ();   
   SR(TurnSpeed);
  //  motor(1,50);
   // motor(2,50);
   // motor(3,-50);
   // motor(4,-50);
    delay(130);
   // MotorStop (); 
    
    
    }

    void UTurn()  //เลี้ยวซ้าาย
  {
    //MotorStop ();   
    SR(TurnSpeed);
    delay(270);
   // MotorStop (); 
    
    
    }
