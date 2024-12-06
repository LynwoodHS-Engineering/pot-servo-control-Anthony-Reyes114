#include <Servo.h>

Servo myServo; 

void setup() {
  pinMode(A0, INPUT);   
  pinMode(9, OUTPUT);   
  myServo.attach(9);     
  
  Serial.begin(9600);   
}

void loop() {
  int potValue = analogRead(A0);   
  int servoValue = map(potValue, 0, 1023, 0, 180);  
  
  myServo.write(servoValue);   
  
  
  Serial.print("Potentiometer Value: ");
  Serial.print(potValue);
  Serial.print("/tServo Angle: ");
  Serial.println(servoValue);
  
  delay(50);  
}
