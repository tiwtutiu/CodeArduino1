void ShowAnalog()  //แสดงค่าเซนเซอร์
{
 //glcdClear();     //เคลียหน้าจอ 
 //glcdFillScreen(GLCD_BLUE); //กำหนดสีพื้นหลัง

 Read3Analog();
 Read2AnalogBack();

 glcd(0,0,"L1=%d",L1);
  glcd(1,0,"C=%d",C);
  glcd(2,0,"R1=%d",R1);

  glcd(4,0,"BL1=%d",BL1);
  glcd(5,0,"BR1=%d",BR1);
 //oled.show();
}
