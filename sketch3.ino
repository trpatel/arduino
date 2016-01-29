int photoRPin = 0; 
int minLight;
int maxLight;
int lightLevel;
int adjustedLightLevel;
char inputSensorState;

void setup() {
 Serial.begin(9600);
 
 //Setup the starting light level limits
 lightLevel=analogRead(photoRPin);
 minLight=lightLevel-20;
 maxLight=lightLevel;
 pinMode(8, OUTPUT);
 pinMode(12, INPUT);
}

void loop(){
 //auto-adjust the minimum and maximum limits in real time
 inputSensorState = digitalRead(12);
 if(inputSensorState == HIGH)
 {
   digitalWrite(8, HIGH); 
 }else{
   digitalWrite(8, LOW);
 }
 lightLevel=analogRead(photoRPin);
 if(minLight>lightLevel){
 minLight=lightLevel;
 }
 if(maxLight<lightLevel){
 maxLight=lightLevel;
 }
 
 //Adjust the light level to produce a result between 0 and 100.
 adjustedLightLevel = map(lightLevel, minLight, maxLight, 0, 100); 
 
 //Send the adjusted Light level result to Serial port (processing)
 Serial.println(adjustedLightLevel);
 
 //slow down the transmission for effective Serial communication.
 delay(50);
}