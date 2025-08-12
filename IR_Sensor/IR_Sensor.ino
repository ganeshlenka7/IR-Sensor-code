int led=13; 
int ir=2;
void setup()
 {
 pinMode(led,OUTPUT);
 pinMode(ir,INPUT); 
}
void loop()
{
  int a=digitalRead(ir);
  if(a==LOW)
  {
    digitalWrite(led,HIGH);
  }
  else
  {
    digitalWrite(led,LOW);
  }
}
