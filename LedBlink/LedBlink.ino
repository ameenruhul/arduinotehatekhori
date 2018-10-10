
/* the setup function runs once when you press reset or power the board */

void setup() {

  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);

}

// the loop function runs over and over again forever

void loop() {

  digitalWrite(13, HIGH);   // turn the LED on with 5V 
  delay(1000);              // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by 0V        
  delay(1000);                // wait for a second

}

