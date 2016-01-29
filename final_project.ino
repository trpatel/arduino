//Tej Patel
      
int photoRPin = 0; 
int minLight;
int maxLight;
int lightLevel;
int adjustedLightLevel;
int thermPin = 1;
int potPin = 2;
int tiltPin = 3;
int treading;
int ledPin1= 11;
int ledPin2 = 12;
int ledPin3 = 13;
int ledPin4 = 10;
int val = 0;
int tal = 0;

void setup() {
 Serial.begin(9600);
 
 //Setup the starting light level limits
 lightLevel=analogRead(photoRPin);
 minLight=lightLevel-20;
 maxLight=lightLevel;
 pinMode(ledPin1, OUTPUT);
 pinMode(ledPin2, OUTPUT);
 pinMode(ledPin3, OUTPUT);
 pinMode(ledPin4, OUTPUT);
 pinMode(tiltPin, INPUT);
}

void loop(){
 //auto-adjust the minimum and maximum limits in real time
 lightLevel=analogRead(photoRPin);
 if(minLight>lightLevel){
 minLight=lightLevel;
 }
 if(maxLight<lightLevel){
 maxLight=lightLevel;
 }
 lightLevel = 1023 - lightLevel;
 //Adjust the light level to produce a result between 0 and 255.
 adjustedLightLevel = map(lightLevel, 0, 1023, 0, 255); 
 analogWrite(ledPin1, adjustedLightLevel);
  //Send the adjusted Light level result to Serial port (processing)
 Serial.println(adjustedLightLevel);
 //slow down the transmission for effective Serial communication.
 delay(500);
 
 val = analogRead(potPin);
 digitalWrite(ledPin2, HIGH);
 Serial.println(val);
 delay(val);
 digitalWrite(ledPin2, LOW);
 delay(val);
 
 tal = analogRead(thermPin);
 digitalWrite(ledPin3, HIGH);
 Serial.println(tal);
 delay(tal);
 digitalWrite(ledPin3, LOW);
 delay(tal);
 
 if(digitalRead(tiltPin) == HIGH){
   digitalWrite(ledPin4, HIGH);
 }else{
   digitalWrite(ledPin4, LOW);
 }
 delay(25);
}