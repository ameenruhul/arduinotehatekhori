int led = 11;
int button = 9;

int buttonState = 0;
int brightness = 0;
int brightup = 20;

void setup() {

  pinMode(led, OUTPUT);
  pinMode(button, INPUT);

}

void loop() {


  analogWrite(led, brightness);
  buttonState = digitalRead(button);

  if ( buttonState == 1 ) 
  brightness = brightness + brightup;
  
 
  if ( brightness >= 255 ) 
  brightness = 0;
 
  delay(30);
}

