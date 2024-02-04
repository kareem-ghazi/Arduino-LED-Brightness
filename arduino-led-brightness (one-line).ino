int i = 0;

void setup()
{
  
}

void loop()
{
  /*
  In this formula, we subtract 1 from i before multiplying it by π/255. 
  This ensures that the oscillation starts from 0 instead of 1. 
  The cosine function then generates values between -1 and 1, 
  and we scale it by 127.5 to obtain values between -127.5 and 127.5. 
  Finally, we add 127.5 to bring the values between 0 and 255.
  */
  
  analogWrite(3, 127.5 * (1 - cos((i++-1) * 3.14159/255)));
  delay(5);
}