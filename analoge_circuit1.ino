# define gas A0
#include <Servo.h>

// Create a new servo object:
#define servoPin 9, 4
Servo s9, s4;
void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
   s4.attach( 4);
  s9.attach( 9);
}

void loop()
{  
  
int gas_In = analogRead(A0);
  Serial.println(gas_In);
   if (A0 > 50){
       s9.write (90);
  s4.write(90);
}
  else if(gas_In > 25){
      s9.write(0);
  }
 else{
   s9.write(90);
  s4.write(90);
 }
  delay(10);
}