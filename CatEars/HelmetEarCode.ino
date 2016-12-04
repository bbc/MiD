#include <Servo.h>

//const int pinButton = 6;
const int pinServo1 = 2;
const int pinServo2 = 3;

Servo groveServo1;
Servo groveServo2;

void setup()
{
  //pinMode(pinButton, INPUT);
  groveServo1.attach(pinServo1);
  groveServo2.attach(pinServo2);

}

void loop()
{

  groveServo1.write(20);
  groveServo2.write(90);
  delay(800);
  groveServo1.write(90);
  groveServo2.write(160);
  delay(800);
  groveServo1.write(90);
  groveServo2.write(90);
  delay(2000);
  groveServo1.write(20);
  groveServo2.write(20);
  delay(500);
  groveServo1.write(160);
  groveServo2.write(160);
  delay(800);
  groveServo1.write(90);
  groveServo2.write(90);
  delay(500);
  groveServo1.write(20);
  groveServo2.write(160);
  delay(500);
  groveServo1.write(160);
  groveServo2.write(20);
  delay(500);
  groveServo1.write(90);
  groveServo2.write(90);
  delay(500);



}


