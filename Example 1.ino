// Declaration of variables
float tempC;
int reading;
int tempPin = 0;

void setup()
{
// Configuration setting
analogReference(INTERNAL);
Serial.begin(9600);
}

void loop()
{
// Write reading to the variable
reading = analogRead(tempPin);
tempC = reading / 9.31;

Serial.println(tempC);
delay(1000);
}
