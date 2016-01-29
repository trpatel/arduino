/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);    
}

// the loop routine runs over and over again forever:
void loop() {
  
  //short blink
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(250);               // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(250);               // wait for a second
  //medium blink
  digitalWrite(led, HIGH);
  delay(750);
  digitalWrite(led, LOW);
  delay(250);
  //long blink
  digitalWrite(led, HIGH);
  delay(1250);
  digitalWrite(led, LOW);
  delay(1750);
  

  //SOS
  //S
  digitalWrite(led, HIGH);
  delay(250);
  digitalWrite(led, LOW);
  delay(250);
  digitalWrite(led, HIGH);
  delay(250);
  digitalWrite(led, LOW);
  delay(250);
  digitalWrite(led, HIGH);
  delay(250);
  digitalWrite(led, LOW);
  delay(750);
  //O
  digitalWrite(led, HIGH);
  delay(750);
  digitalWrite(led, LOW);
  delay(250);
  digitalWrite(led, HIGH);
  delay(750);
  digitalWrite(led, LOW);
  delay(250);
  digitalWrite(led, HIGH);
  delay(750);
  digitalWrite(led, LOW);
  delay(750);
  //S
  digitalWrite(led, HIGH);
  delay(250);
  digitalWrite(led, LOW);
  delay(250);
  digitalWrite(led, HIGH);
  delay(250);
  digitalWrite(led, LOW);
  delay(250);
  digitalWrite(led, HIGH);
  delay(250);
  digitalWrite(led, LOW);
  delay(1750);


  //Last name: PATEL
  //  P
  digitalWrite(led, HIGH);
  delay(250);
  digitalWrite(led, LOW);
  delay(250);
  digitalWrite(led, HIGH);
  delay(750);
  digitalWrite(led, LOW);
  delay(250);
  digitalWrite(led, HIGH);
  delay(750);
  digitalWrite(led, LOW);
  delay(250);
  digitalWrite(led, HIGH);
  delay(250);
  digitalWrite(led, LOW);
  delay(750);
  //   A
  digitalWrite(led, HIGH);
  delay(250);
  digitalWrite(led, LOW);
  delay(250);
  digitalWrite(led, HIGH);
  delay(750);
  digitalWrite(led, LOW);
  delay(750);
  // T
  digitalWrite(led, HIGH);
  delay(750);
  digitalWrite(led, LOW);
  delay(750);
  // E
  digitalWrite(led, HIGH);
  delay(250);
  digitalWrite(led, LOW);
  delay(750);
  // L
  digitalWrite(led, HIGH);
  delay(250);
  digitalWrite(led, LOW);
  delay(250);
  digitalWrite(led, HIGH);
  delay(750);
  digitalWrite(led, LOW);
  delay(250);
  digitalWrite(led, HIGH);
  delay(250);
  digitalWrite(led, LOW);
  delay(250);
  digitalWrite(led, HIGH);
  delay(250);
  digitalWrite(led, LOW);
  delay(1750);
}