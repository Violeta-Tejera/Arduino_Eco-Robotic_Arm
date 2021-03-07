#include <Servo.h>

int servoPin1 = 2, servoPin2 = 3, servoPin3 = 4, servoPin4 = 5;
int value1, value2, value3, value4;

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;


int xPin1 = 0;
int yPin1 = 1;

int xPin2 = 2;
int yPin2 = 3;

void setup() {
  
  Serial.begin(9600);
  
  servo1.attach(2);
  servo2.attach(3);
  servo3.attach(4);
  servo4.attach(5);

}

void loop() {

  value1 = analogRead(xPin1);
  value2 = analogRead(yPin1);

  value3 = analogRead(xPin2);
  value4 = analogRead(yPin2);

  servo1.write(value1);

  servo2.write(value2);

  servo3.write(value3);

  servo4.write(value4);


}
