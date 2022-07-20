#include <Stepper.h>
int spr = 20;//stepper steps
int D=0;
int x=0;
int c1= 10;
int c2= 11;
Stepper stepper(spr, 3, 4, 8, 9);

void setup() {
  // put your setup code here, to run once:
stepper.setSpeed(60);
}

void loop() {
  // put your main code here, to run repeatedly:
stepper.step(5);
delay(5000);
stepper.step(-5);
delay(5000);
}