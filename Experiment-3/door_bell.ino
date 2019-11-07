int LED = 13;

int BUTTON = 2;

int BUTTON_PRESSES = 0;

void setup()
{

pinMode(13,OUTPUT);

pinMode(2,INPUT);

}

void loop()
{

if(digitalRead(2) == HIGH)
{
digitalWrite(13,HIGH);
delay(300);
}
else
{

digitalWrite(13,LOW);

}

}