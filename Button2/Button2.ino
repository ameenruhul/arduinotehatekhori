

int buttonPin = 2;     //the number of the pushbutton pin          
int LEDPin =  13;      //the number of the LED pin
int buttonState = 0;    //this variable will change value        



void setup() {
  
 // initialize the LED pin as an output
  pinMode(LEDPin, OUTPUT);

  // initialize the pushbutton pin as an input
  pinMode(buttonPin, INPUT);

}



void loop() {

  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  //If it is, the buttonState is HIGH:

  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(LEDPin, HIGH);
  } 
  else digitalWrite(LEDPin, LOW); // turn LED off:

}

