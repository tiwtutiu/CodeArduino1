void startTimer0() // เริ่มจับเวลา Timer0
{
  BaseTimer0=millis();
  Timer0=0;
}
void ReadTimer0() //อ่านค่า Timer0
{
  Timer0 = millis() - BaseTimer0;
}
