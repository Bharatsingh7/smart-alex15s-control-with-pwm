#include <Servo.h>
#include <Arduino.h>
int channel2 = 10;
const int pwmPin = 3;
const int dirPin = 2;


void setup() {
 pinMode(channel2, INPUT);
   Serial.begin(9600);
}

void loop() {
   int pwm = 0;
  int value = pulseIn(channel2, HIGH, 25000);
  if(value==0)
  {
      digitalWrite(dirPin, LOW);
      analogWrite(pwmPin, 0);
  }
      
  else if(value > 1530)
  {
   pwm = map(value, 1530, 1800, 0, 255);  // Map values up to 1800 normally
if (value >= 1800) {
  pwm = 255;  // Set pwm to max (255) for values 1800 and above
}

      digitalWrite(dirPin, HIGH);
      analogWrite(pwmPin, pwm);
  }
   else if(value < 1525)
  {
    pwm = map(value, 1525, 1188, 0, 255);  // Map values up to 1800 normally
         // Set pwm to max (255) for values 1800 and above
      digitalWrite(dirPin, LOW);
      analogWrite(pwmPin, pwm);
  }
   else
  {
      digitalWrite(dirPin, LOW);
      analogWrite(pwmPin, 0);
  }
    delay(10);
}
