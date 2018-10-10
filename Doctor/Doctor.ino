int sensorPin = A5;
int sensorVal =0;
float bodyTemp;
float voltage;
  

void setup(){
   pinMode(sensorPin,INPUT);
   Serial.begin(9600);
}

void loop(){

  int sensorVal = analogRead(sensorPin);
  //Read the sensor value

  float voltage = (sensorVal/1024.0) * 5.0; 
  //Convert reading to voltage
 
  float temperature = (voltage - .5) * 100;
 
  //convert millivolts into  temperature

   bodyTemp=(temperature *1.8)+32;  

  Serial.print(bodyTemp);
  Serial.print("\n");

}


