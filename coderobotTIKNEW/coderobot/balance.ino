void ForwardBalance()

  {
  int Status=0;
  Forward(SlowSpeed,1);
  while (Status==0)
  {
    Convert3Analog();
    if ((L1==0)&&(R1==0))  Status=1;  
    else if ((L1==0)&&(R1==1)) //เจอดำซ้าย ขาวด้นขวา
     {
      MotorStop();
      motor(1,-10);
     motor(2,-10);
      motor(3,30);
     motor(4,30);
      while (R1==1){Convert3Analog();}
      delay(50);
       Status=1;
       }
   else if ((L1==1)&&(R1==0)) //เจอขาวซ้าย ดำด้านขวา
  {
    MotorStop();
    motor(1,30);
    motor(2,30);
    motor(3,-10);
    motor(4,-10);
   while (L1==1){Convert3Analog();}
    delay(50);
    Status=1;
    }
    
   }

}


void  BackwardBalance()//ถอยหลังปรับจูน
{ 
  
  int Status=0;
 Backward(SlowSpeed,1);
  while (Status==0)
  {
    Convert2AnalogBack();
    if ((BL1==0)&&(BR1==0))  Status=1;
    else if ((BL1==0)&&(BR1==1)) //เจอดำซ้าย ขาวด้นขวา
     {
      
      MotorStop();
    motor(1,10);
    motor(2,10);  
    motor(3,-40);
    motor(4,-40);
      while (BR1==1){Convert2AnalogBack();}
      delay(50);
       Status=1;
       }
    else if ((BL1==1)&&(BR1==0)) //เจอขาวซ้าย ดำด้านขวา
     {
    MotorStop();
    
    motor(1,-40);
    motor(2,-40);
    motor(3,10);
    motor(4,10);
   while (BL1==1){Convert2AnalogBack();}
    delay(50);
    Status=1;
     }
   
  }
 }
