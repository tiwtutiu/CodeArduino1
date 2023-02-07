void Read3Analog()  //อ่านค่าเซนเซอร์หน้า 3 ตัว
{
L1= analog(0);
L2= analog(1);

C = analog(2);
R1= analog(1);
R2= analog(1);
}
void  Read2AnalogBack()  //อ่านค่าเซนเซอร์หลัว 2 ตัว
{
BL1= analog(6);
BR1= analog(3);
}

void Convert3Analog()  //แปลงค่า analog เป็นดิจิตอล
{
  Read3Analog();
  if(L1<RefL1) L1=0; else L1=1;
  if(C<RefC) C=0; else C=1;
  if(R1<RefR1) R1=0; else R1=1;
  }
  void Convert2AnalogBack()  //แปลงค่า analog เป็นดิจิตอล
{
  Read2AnalogBack();
  if(BL1<RefBL1) BL1=0; else BL1=1;
  if(BR1<RefBR1) BR1=0; else BR1=1;
  }
