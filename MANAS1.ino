
int i=9;
int j;
int inpin=7;
int inpin1=8;
long time=0;
long debounce=200;
int previous=LOW;
int previous1=LOW;
int state=HIGH;
int state1=HIGH;
int f=0;

void setup()
{
pinMode(inpin,INPUT);
pinMode(inpin1,INPUT);
Serial.begin(9600);
}

void loop()
{
  int a=digitalRead(inpin);
  if(a==HIGH && previous==LOW && millis() -time > debounce)
  {
if(state==HIGH)
{
i--;
//state=LOW;
Serial.println(i);
delay(50);
if(i==3)
{
  i=6;
}
}
time=millis();

}
}
 



