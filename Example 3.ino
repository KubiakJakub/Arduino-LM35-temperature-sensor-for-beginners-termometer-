// Declaration of variables
float tempC;
int reading;
int tempPin = 0;
int pin2 = 2;
int pin3 = 3;
int pin4 = 4;
int pin5 = 5;
int pin7 = 7;
int pin8 = 8;
int pin9 = 9;
int pin10 = 10;

void setup()
{
  // Configuration setting
  analogReference(INTERNAL);
  Serial.begin(9600);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
  pinMode(pin5, OUTPUT);
  pinMode(pin7, OUTPUT);
  pinMode(pin8, OUTPUT);
  pinMode(pin9, OUTPUT);
  pinMode(pin10, OUTPUT);
}

void loop()
{
  // Write reading to the variable
  reading = analogRead(tempPin);
  tempC = reading / 9.31;
  
  Serial.println(tempC);
  
  // Depending on the measurement, a number of diodes will be released
  if(tempC>=16.00)
  {
    digitalWrite(pin10,HIGH);
  }
  if(tempC>=18.00)
  {
    digitalWrite(pin9,HIGH);
  }
  if(tempC>=20.00)
  {
    digitalWrite(pin8,HIGH);
  }
  if(tempC>=22.00)
  {
    digitalWrite(pin7,HIGH);
  }
  if(tempC>=24.00)
  {
    digitalWrite(pin5,HIGH);
  }
  if(tempC>=26.00)
  {
    digitalWrite(pin4,HIGH);
  }
  if(tempC>=28.00)
  {
    digitalWrite(pin3,HIGH);
  }
  if(tempC>=30.00)
  {
    digitalWrite(pin2,HIGH);
  }
  
  delay(10);
  digitalWrite(pin10,LOW);
  digitalWrite(pin9,LOW);
  digitalWrite(pin8,LOW);
  digitalWrite(pin7,LOW);
  digitalWrite(pin5,LOW);
  digitalWrite(pin4,LOW);
  digitalWrite(pin3,LOW);
  digitalWrite(pin2,LOW);
  delay(1);

}
