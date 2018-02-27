// modified by Benedetta 
//declare the variables, pins etc. that you want the 
//whole program to know about

int analogInPin = A0;  // Analog input that sensor is attached to

int sensorValue = 0;   // Value from the sensor

void setup() {
  // initialize the debugging monitor of Arduino 
  // to read the values from the sensor 
  Serial.begin(9600);
}

void loop() {
  // read the analog value from the sensor
  sensorValue = analogRead(analogInPin);

  // print the results to the Serial Monitor:
  Serial.print("sensor = ");
  Serial.println(sensorValue);

  // wait 2 milliseconds before the next loop for the analog-to-digital
  // converter to settle after the last reading
  delay(2);
}
