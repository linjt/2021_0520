// C++ code
//
void setup()
{
  for(byte i=2;i<=9;i++)
  pinMode(i, OUTPUT);
}

void loop()
{
  for(byte i =2; i<=9; i++){
  	digitalWrite(i, HIGH);
	delay(1000);
    digitalWrite(i, LOW);
  }
}