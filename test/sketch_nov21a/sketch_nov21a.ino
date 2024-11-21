float Kp=0,Ki=0,Kd=0;
float error=0, P=0, I=0, D=0, PID_value=0;
float pre_error=0,pre_I=0,sum_error = 0;
int sensor[5]={0, 0, 0, 0, 0};
int MR1=7,MR2=8,ML1=9,ML2=10;
int Mspeed = Kp*error + Kd*(error - pre_error) + Ki*(sum_error);
int baseSpeed = 100;
int maxSpeed = 100;
int RSpeed,LSpeed;
void read_sensor_values(void);
void calculate_pid(void);
void motor_control(void);

void setup()
{

pinMode(10,OUTPUT); //PWM Pin 1 Left
pinMode(11,OUTPUT); //PWM Pin 2 Right

pinMode(4,OUTPUT); //Left Motor Pin 1 in 1
pinMode(5,OUTPUT); //Left Motor Pin 2 in 2
pinMode(6,OUTPUT); //Right Motor Pin 1 in 3
pinMode(7,OUTPUT); //Right Motor Pin 2 in 4
Serial.begin(9600); //Enable Serial Communications  

}

void loop()
{
read_sensor_values();
}

