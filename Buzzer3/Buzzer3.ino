int Do = 262, Re = 294 , Mi = 330 , Fa = 349 , Sol = 392, 
    La = 440 , Si = 494, Do2 = 524;


int buzz = 9; 
int wait = 0; // প্রথমে আমরা  wait কে জিরো ধরে শুরু করি, পরে মান ধরে নিব   

void setup()
{
  pinMode(buzz, OUTPUT);
}



void loop()
{
  wait = 500; 

   /* wait means how much we want to wait in each step, here 
   500 microseconds or 200 microseconds */ 


  tone(buzz, Do, wait);
  delay(1000);

  tone(buzz, Re, wait);
  delay(1000);

  tone(buzz, Mi, wait);
  delay(1000);

  tone(buzz, Fa, wait); //this note might sound too sharp
  delay(1000);

  tone(buzz, Sol, wait);
  delay(1000);

  tone(buzz, La, wait);
  delay(1000);

  tone(buzz, Si, wait);
  delay(1000);

  tone(buzz, Do2, wait);
  delay(1000);
  
  noTone(buzz); // this stops the buzzer sound

}

