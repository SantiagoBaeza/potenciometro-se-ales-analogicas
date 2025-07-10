
void setup()
{
	pinMode(9, OUTPUT);
}

void loop()
{
  if(analogRead(A0)== 0) //0%
  {
  	analogWrite(9,0); 
  }
  if(analogRead(A0)>0 && analogRead(A0)<256) //25%
  {
  	analogWrite(9,64);
  }
  if(analogRead(A0)>256 && analogRead(A0)<512) //50%
  {
  	analogWrite(9,128);
  }
  if(analogRead(A0)>512 && analogRead(A0)<767) //75%
  {
  	analogWrite(9,191);
  }
  if(analogRead(A0)>767 && analogRead(A0)<1023) //100%
  {
  	analogWrite(9,255);
  }
}