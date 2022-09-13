#define A0
#define Button 6

void setup()
{
  pinMode(6,INPUT);
  pinMode(Button,INPUT);
  Serial.begin(9600);
  Serial.println("Welcome to 2 sensors integration with Arduino");
}

void loop()
{
 bool buttonData = 0;
 int Data = 0;
 buttonData = digitalRead(Button);
 Data = analogRead(6);
  
  Serial.print("Data: ");
  Serial.print(Data);
  Serial.print("\t Button State: ");
  Serial.println(buttonData);
  
  delay(1000);
}