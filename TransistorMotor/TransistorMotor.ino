
/* the transistor which controls the motor will be attached to digital pin 9 */

int motorControl = 9;

void setup() {
  pinMode(motorControl, OUTPUT);  
}

void loop() {

     // ramp up the motor speed
    for(int x = 0; x <= 255; x++){
      analogWrite(motorControl, x);
      delay(50);
    }

    // ramp down the motor speed
    for(int x = 255; x >= 0; x--){
      analogWrite(motorControl, x);
      delay(50);
    }    
  
    delay(1);        
    // delay in between reads for stability
}



