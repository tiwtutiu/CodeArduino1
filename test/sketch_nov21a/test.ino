void CalERR()
{
sensor[0]=digitalRead(2);
sensor[1]=digitalRead(3);
sensor[2]=digitalRead(4);
sensor[3]=digitalRead(5);
sensor[4]=digitalRead(6);

Serial.print(digitalRead(2));Serial.print(" ");    
Serial.print(digitalRead(3));Serial.print(" ");   
Serial.print(digitalRead(4));Serial.print(" ");
Serial.print(digitalRead(5));Serial.print(" "); 
Serial.println(digitalRead(6));Serial.print(" ");delay(300);

if((sensor[0]==1)&&(sensor[1]==1)&&(sensor[2]==1)&&(sensor[3]==1)&&(sensor[4]==0))        //1 1 1 1 0               4
error=4;
else if((sensor[0]==1)&&(sensor[1]==1)&&(sensor[2]==1)&&(sensor[3]==0)&&(sensor[4]==0))   //1 1 1 0 0               3
error=3;
else if((sensor[0]==1)&&(sensor[1]==1)&&(sensor[2]==1)&&(sensor[3]==0)&&(sensor[4]==1))   //1 1 1 0 1               2 
error=2;
else if((sensor[0]==1)&&(sensor[1]==1)&&(sensor[2]==0)&&(sensor[3]==0)&&(sensor[4]==1))   //1 1 0 0 1               1
error=1;
else if((sensor[0]==1)&&(sensor[1]==1)&&(sensor[2]==0)&&(sensor[3]==1)&&(sensor[4]==1))   //1 1 0 1 1               0
error=0;
else if((sensor[0]==1)&&(sensor[1]==0)&&(sensor[2]==0)&&(sensor[3]==1)&&(sensor[4]==1))   //1 0 0 1 1              -1
error=-1;
else if((sensor[0]==1)&&(sensor[1]==0)&&(sensor[2]==1)&&(sensor[3]==1)&&(sensor[4]==1))   //1 0 1 1 1              -2
error=-2;
else if((sensor[0]==0)&&(sensor[1]==0)&&(sensor[2]==1)&&(sensor[3]==1)&&(sensor[4]==1))   //0 0 1 1 1              -3
error=-3;
else if((sensor[0]==0)&&(sensor[1]==1)&&(sensor[2]==1)&&(sensor[3]==1)&&(sensor[4]==1))   //0 1 1 1 1              -4
error=-4;
}
void T_PID()
{
LSpeed = baseSpeed + MSpeed;
RSpeed = baseSpeed - MSpeed;
  
if(LSpeed > maxSpeed) LSpeed = maxSpeed; //LSpeedมากกว่าเเม็กLSpeedมีความเร็วเท่ากับ100
if(RSpeed > maxSpeed) RSpeed = maxSpeed; //RSpeedมากกว่าเเม็กRSpeedมีความเร็วเท่ากับ100

if(LSpeed < -maxSpeed) LSpeed = -maxSpeed; //LSpeedน้อยกว่าเเม็กติดลบLSpeedเท่ากับเเม็กติดลบ
if(RSpeed < -maxSpeed) RSpeed = -maxSpeed; //RSpeedน้อยกว่าเเม็กติดลบRSpeedเท่ากับเเม็กติดลบ
  
motor(1,leftSpeed);
}
void TR_PID()






motor(2,rightSpeed);
sleep(33);  
   
pre_error = error;
sum_error += error;