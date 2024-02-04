const double PI = 3.14159265;
int i = 0;

void setup()
{
  
}

void loop()
{
  /* Using the idea of how a cosine function oscillates, we could use it to oscillate between 255 and 0 respectively.
  Scale the period and frequency of the cosine wave to fit the interval [255, 0]. */
  analogWrite(3, 127.5 * (1 - cos((i++ - 1) * PI / 255)));
  delay(5);
}
