#include <ESP32Servo.h>

Servo servo_1;
//Servo servo_2;
//Servo servo_3;
int servo_1pin = 13;
//int servo_2pin = 4;
//int servo_3pin = 6;


void setup()
{
  servo_1.attach(servo_1pin, 500, 2500);
  //servo_2.attach(servo_2pin, 500, 2500);
  servo_1.write(45);
  //servo_2.write(90);
  //servo_3.write(90);

  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) 
  {
    char cmd = Serial.read();
    if (cmd == 'W') 
    {
      servo_1.write(0);
      //servo_2.write(10);
    }
    else if (cmd == 'S') 
    {
      servo_1.write(90);
      //servo_2.write(170);
    }
  }
}