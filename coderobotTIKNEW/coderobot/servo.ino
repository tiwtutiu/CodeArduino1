void test_sv()
{
  int k;
      k=knob(0,180);
      
      glcd(1,0,"i=%d",k);
      //oled.show();
      servo(0,k);
      sleep(0.1);
}
void Kick()
{
  MotorStop();
  servo(0,180); //เตะ
  delay(300);
  servo(0,128); //กลับ
  delay(300);
  servo(0,180); //เตะ
  delay(300);
}
