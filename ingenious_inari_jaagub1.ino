// C++ code
//
void setup()
{
  pinMode(2, OUTPUT);
}

void loop()
{
  digitalWrite(2,1);
  delay(10000); 
  digitalWrite(2,0); 
}