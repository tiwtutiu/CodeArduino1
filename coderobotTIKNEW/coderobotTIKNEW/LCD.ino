void ShowAnalog()  //แสดงค่าเซนเซอร์
{
 //glcdClear();     //เคลียหน้าจอ 
 //glcdFillScreen(GLCD_BLUE); //กำหนดสีพื้นหลัง

 Read3Analog();
 Read2AnalogBack();

 oled.text(0,0,"L1=%d",L1);
 oled.text(1,0,"C=%d",C);
 oled.text(2,0,"R1=%d",R1);

 oled.text(4,0,"BL1=%d",BL1);
 oled.text(5,0,"BR1=%d",BR1);
 oled.show();
}
