int sensorPin = A0;  // select the pin for the sensor 
int ledPin = 13;      // select the pin for the LED
int sensorValue = 0; // variable to store the value from sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
  //initialize debugging monitor
  Serial.begin(9600);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  //print value to the monitor
  Serial.println(sensorValue);

  //if sensor doesn't sense phone, turn alert LED on 
  if (sensorValue == 0){   
    digitalWrite(ledPin, HIGH);
  }
  //if sensor senses phone, turns alert LED off 
  if (sensorValue > 0){
    digitalWrite(ledPin, LOW);
  }
}
