int i=0;
int inpin=7;
long time=0;
long debounce=200;
int previous=LOW;
int state=HIGH;

void setup()
{
pinMode(inpin,INPUT);

Serial.begin(9600);
}

void loop()
{
  int a=digitalRead(inpin);
  if(a==HIGH && previous==LOW && millis() -time > debounce)
  {
if(state==HIGH)
{
i++;
Serial.println(i);
delay(50);
if(i==9)
{
  i=0;
}
}
time=millis();

}
}
 
