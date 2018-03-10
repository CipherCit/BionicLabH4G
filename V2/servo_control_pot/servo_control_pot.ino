#include <Servo.h> 
int potPin = 0;
int servoPin = 6;
Servo myservo;

void setup() {
  Serial.begin(19200);
  myservo.attach(servoPin);
  myservo.writeMicroseconds(1500);
}

void loop() {
  
  float potVal = analogRead(potPin);
  float x = map(potVal, 0, 1023, 0, 300);
  float y = map(potVal, 0, 1023, 500, 2500);
  
  Serial.print("Pot_Degrees: ");
  Serial.print(x);
  Serial.print("\tServo_val: ");    
  Serial.println(y);

  myservo.writeMicroseconds(y);

}
