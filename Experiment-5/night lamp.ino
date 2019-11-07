int sensorPin=A0;
int ledPin=13;
int sensorValue=0;
void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop()
{
  sensorValue=analogRead(sensorPin);
  Serial.print(sensorValue);
  Serial.print("\n");
  delay(100);
  if(sensorValue>300)
  {
    digitalWrite(13, LOW);
  }
  else
  {
  digitalWrite(13, HIGH);
  }
}