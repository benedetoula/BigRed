// modified by Benedetta 
//declare the variables, pins etc. that you want the 
//whole program to know about

int ledPin = 13;  // Pin the LED is attached to 

// initialization routine that the Arduino will execute once
void setup() {
  //declare pin as an output so we can write to it 
  pinMode(ledPin, OUTPUT); 
}

// the main body of your program goes here and runs over and over
void loop() {
  //send voltage to the LED to turn it on
  digitalWrite(ledPin,HIGH);
  delay(1000); // in milliseconds
  //send no voltage to the LED to turn it off
  digitalWrite(ledPin, LOW);
  delay(1000);
}
