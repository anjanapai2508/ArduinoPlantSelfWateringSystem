const int analogInPin = A0;
int sensorValue = 0;
int relayOutput = 8;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(relayOutput, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
sensorValue = analogRead(analogInPin);
Serial.println(sensorValue);
if(sensorValue < 300)
{
  digitalWrite(relayOutput, LOW); 
  delay(5000);
  digitalWrite(relayOutput, HIGH);
}
else
{
  digitalWrite(relayOutput, HIGH);
 
  
}
delay(1000);     
}
