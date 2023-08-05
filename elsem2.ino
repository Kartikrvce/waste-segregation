#include<Servo.h>
Servo myservo;

int pos = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  myservo.attach(9);
  pinMode(12, INPUT);
  Serial.begin(9600);
}


void loop() {
  // put your main code here, to run repeatedly:
  int ind = digitalRead(12);
  Serial.println(ind);
   if(ind==0)
    myservo.write(90);
  //--------------------------->
   int val = analogRead(A0);
   Serial.println(val);
   if(val<1000)
    myservo.write(180);

   delay(1000);
   myservo.write(0);   
  
}
