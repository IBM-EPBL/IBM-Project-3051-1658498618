// C++ code
//
#include<Servo.h>
Servo smotor;
int trigpin=12;
int echopin=13;
void setup()
{
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(A0,INPUT);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  smotor.attach(3);
  pinMode(8,INPUT);
  pinMode(7,OUTPUT);
}

void loop()
{
  //program to switch on fan or air-conditioners when temperature raises to cetain level.
  double temp=analogRead(A0);
  temp=(((temp/1024)*5)-0.5)*100;
  digitalWrite(2,LOW);
  Serial.print("Room temperature: ");
  Serial.println(temp);
  if (temp>35)
    digitalWrite(2,HIGH);
  
  //program for opening door as an object try to enter.
  digitalWrite(trigpin,LOW);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin,LOW);
  float duration=pulseIn(echopin,HIGH);
  float distance=(duration*0.0343)/2;
  Serial.print("Distance: ");
  Serial.println(distance);
  
  //when object within 1m.
  if (distance<100){  
    for(int i=0;i<=90;i+=5){
      smotor.write(i);
      delay(100);
    }
    delay(2000);
    for(int j=90;j>=0;j-=5){
      smotor.write(j);
      delay(100);
    }
  }
  
  // Staircase (steps) motion detection light.
  digitalWrite(7,LOW);
  int a=digitalRead(8);
  if(a){
    Serial.println("Motion Detected");
    digitalWrite(7,HIGH);
    delay(3000); //enough time to climb the stairs.
  }
  delay(100);
}