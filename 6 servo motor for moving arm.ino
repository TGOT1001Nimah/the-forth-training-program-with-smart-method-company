
// Include the servo library:
#include <Servo.h>

// Create a new servo object:

Servo s13, s12, s11, s10, s9, s8;




// Define the servo pin:
#define servoPin 13, 12, 10, 9, 8


void setup() {
  // Attach the Servo variable to a pin:
  s13.attach( 13);
  s12.attach( 12);
  s11.attach( 11);
  s10.attach( 10);
 s9.attach( 9);
  s8.attach( 8);
}

void loop() {
  // first postion
  s13.write(90);
  s12.write(90);
  s11.write(90);
  s10.write(90);
  s9.write(90);
  s8.write(90);
 delay(1000);
//first move for sholder
  s13.write(180);
  s10.write(0);
  delay(1000);
  //arms
  s12.write(160);
  s9.write(60);
  delay(1000);
  //hands
  s11.write(130);
  s8.write(30); 
  delay(1000);
  s11.write(70);
  s8.write(170); 
  delay(1000);
  s11.write(130);
  s8.write(30); 
  delay(1000);
  //re-back to first postion
}