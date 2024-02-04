int i = 0;
bool isON = false;

void setup()
{
  Serial.begin(9600);
}

void loop()
{ 
  if (isON) {
  	i -= 5;
  } else {
  	i += 5;
  }
  
  if (i == 255) {
  	isON = true;
  } else if (i == 0) {
  	isON = false;
  } 
  
  analogWrite(3, i);
  Serial.println(i);
  delay(25);
}