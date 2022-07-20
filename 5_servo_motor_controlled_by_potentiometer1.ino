#include <Servo.h> //this is the labrary for servo motor

Servo s13, s12, s11, s10, s9;  // create servo object to control a servo

int potpin = A0;  // analog pin used to connect the potentiometer
int val;

void setup() {
  Serial.begin(9600);          //  setup serial
  s13.attach(13);  // attaches the servo on pin 9 to the servo object
  s12.attach(12);
  s11.attach(11);
  s10.attach(10);
  s9.attach(9);
}

void loop() {
  val = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023)
  Serial.print(val);
  Serial.print(" ");                   //to print the value of th potentiometer on serial 
  val = map(val, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180) note that the result came out from 1023/6
  s13.write(val);//write means your servo will works in reality 
   s12.write(val);
 s11.write(val);
 s10.write(val);
 s9.write(val);
  //her we will set the servo position according to the scaled value
  Serial.print(val); 
  Serial.println();
  delay(200); // waits for the servo to get anither results
}