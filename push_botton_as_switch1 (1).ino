int ledState=0;
int ledPin1=8;
int ledPin2=9;
int buttonPin=7;
int buttonStateNew;
int buttonStateOld=1;
#include <Servo.h>

Servo  s3, s4;

#define servoPin 3, 4

void setup() 
{  
pinMode(ledPin1,OUTPUT);
pinMode(ledPin2,OUTPUT);
pinMode(buttonPin,INPUT);
   s3.attach( 3);
  s4.attach( 4);
 
}

void loop() 
{
buttonStateNew= digitalRead(buttonPin);

  if(buttonStateOld == 0 && buttonStateNew == 1)
{
if (ledState==0){
digitalWrite(ledPin1,HIGH);
digitalWrite(ledPin2,HIGH); 
   s3.write(180);
     s4.write(180);
  ledState=1;
 }
else
{ 
  digitalWrite(ledPin1,LOW);
  digitalWrite(ledPin2,LOW);
     s3.write(0);
     s4.write(0);
  ledState=0;
}
}
buttonStateOld=buttonStateNew;


}

