int ledPin =  5;      // the number of the LED pin
int ledState = LOW;             // ledState used to set the LED
unsigned long previousMillis = 0;        // will store last time LED was updated
long OnTime = 5000;           // milliseconds of on-time
long OffTime = 500;          // milliseconds of off-time
 
void setup() 
{
  // set the digital pin as output:
  pinMode(ledPin, OUTPUT);      
}
 
void loop()
{
  // check to see if it's time to change the state of the LED
  int sensorValue = analogRead(A0);
  unsigned long currentMillis = millis();
 
  if((sensorValue >= 200) && (currentMillis - previousMillis >= OnTime))
  {
    ledState = HIGH;  // Turn it off
    previousMillis = currentMillis;  // Remember the time
    digitalWrite(ledPin, ledState);  // Update the actual LED
  }
  else if ((sensorValue < 200) && (currentMillis - previousMillis >= OffTime))
  {
    ledState = LOW;  // turn it on
    previousMillis = currentMillis;   // Remember the time
    digitalWrite(ledPin, ledState);    // Update the actual LED
  }
}
