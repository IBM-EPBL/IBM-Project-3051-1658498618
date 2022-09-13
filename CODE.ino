float X,Y,Z,temp;
void setup()
{
  pinMode(8,INPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(A5,INPUT);
  pinMode(A4,INPUT);
  Serial.begin(9600);
}
void loop()
{
  X=digitalRead(8);
  Y=analogRead(A5);
  Z=analogRead(A4);
  Serial.println(X);
  Serial.println(Y);
  Serial.println(Z);
  temp=(double)Z/1024;
  temp=temp*5;
  temp=temp-0.5;
  temp=temp+100;
  if((X>0))
  {
    if((Y<550) && (temp>30))
       {
         digitalWrite(5, HIGH);
         digitalWrite(6, HIGH);
       }
       else if((Y<550)&&(temp<30))
    {
      digitalWrite(5,HIGH);
      digitalWrite(6,LOW);
    }
    else if((Y>550)&&(temp>30))
    {
      digitalWrite(5,LOW);
      digitalWrite(6,HIGH);
    }
    else if((Y>550)&&(temp<30))
    {
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
    }
  }
  else
  {
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
  }
}

        
    