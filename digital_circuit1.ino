int PIR =3;
int servo=5;
int pizo=8;
#include <Servo.h>
Servo s5;
#define servoPin 5,
void setup()
{
  pinMode(pizo, OUTPUT);
  
  pinMode(PIR, INPUT);
  s5.attach( 5);
  Serial.begin (9600);
}

void loop()
{
  s5.write(0);

   int PIR=digitalRead(3);
if (PIR == HIGH){
      digitalWrite(pizo, HIGH);
       Serial.println("open");
      Serial.println(PIR);
    s5.write(90);
 delay(1000);
  
}  
    else{
      Serial.println(PIR);
      digitalWrite(pizo,LOW);
      Serial.println("non-open");
    }
}