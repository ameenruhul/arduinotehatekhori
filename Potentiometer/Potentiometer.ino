
int potPin = A2;  // select the input pin for the potentiometer
int LEDPin = 13;  // select the pin for the LED
int value = 0;   // variable to store the value coming from the sensor

void setup() {
  pinMode(LEDPin, OUTPUT);  // declare the LEDPin as an OUTPUT
}

void loop() {
  value = analogRead(potPin);    // read the value from the sensor
  analogWrite(LEDPin,value);                
}

