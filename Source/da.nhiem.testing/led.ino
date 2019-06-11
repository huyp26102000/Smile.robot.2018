void led() 
{
    led1(1,0,0,0,0,1);
    delay(75);
    led1(1,1,0,0,0,1);
    delay(75);
    led1(1,1,1,0,0,1);
    delay(75);
    led1(0,1,1,1,0,1);
    delay(75);
    led1(0,0,1,1,1,1);
    delay(75);
    led1(0,0,0,1,1,1);
    delay(75);
    led1(0,0,0,0,1,1);
    delay(75);
    led1(0,0,0,0,0,1);
    delay(75);
}
void led1(byte a, byte b, byte c, byte d, byte e, byte f)
{
  digitalWrite(A3,a);
  digitalWrite(A2,b);
  digitalWrite(A1,c);
  digitalWrite(A0,d);
  digitalWrite(13,e);
  digitalWrite(7,f);
}
