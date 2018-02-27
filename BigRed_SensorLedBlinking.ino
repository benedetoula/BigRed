int sensorPin = A0;    // select the input pin for the sensor
int ledPin = 13;        // select the pin for the LED
int sensorValue = 0;   // variable to store the value coming from the sensor
int ledState = LOW;    // ledState used to set the LED

unsigned long previousMillis = 0;   // will store last time LED changed status
const long interval = 1000;         // interval at which to blink (milliseconds)

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);

  if (sensorValue == 0){
  //start timer
  //when timer is 5 seconds
  //blink LED 

  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    // save the last time you blinked the LED
    previousMillis = currentMillis;

    // if the LED is off turn it on and vice-versa:
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }
    
    // set the LED with the ledState of the variable:
    digitalWrite(ledPin, ledState);
  }
}
  
  if (sensorValue > 0){
  //sensor is pressed
  //do nothing
}

}
