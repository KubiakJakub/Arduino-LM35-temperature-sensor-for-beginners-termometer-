// Declaration of variables
float tempC;
int reading;
int tempPin = 0;
float minimalTemp = 150;
float maximalTemp = 0;

void setup()
{
// Ustawienie konfiguracji
analogReference(INTERNAL);
Serial.begin(9600);
}

void loop()
{
// Write reading to the variable
reading = analogRead(tempPin);
tempC = reading / 9.31;

// The minimum value
if (maximalTemp < tempC)
{
   maximalTemp = tempC;
}
// The maximum value
if (minimalTemp > tempC)
{
  minimalTemp = tempC;
}

Serial.println(">---------------------<");
Serial.println("Minimal temperature: ");
Serial.println(minimalTemp);
Serial.println("Acutal temperature: ");
Serial.println(tempC);
Serial.println("Max temperature: ");
Serial.println(maximalTemp);
delay(1000);
}
