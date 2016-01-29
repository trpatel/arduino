//Pushbutton switch demo: LED is connected to digital pin 8 and Pushbutton is connected to digital pin 12. 
//The LED glows when the button is pressed.
 
char inputButtonState;
 
void setup()   
{                
  pinMode(8, OUTPUT);        // Initialize Arduino Digital Pins 8 as output for connecting LED
  pinMode(12,INPUT);         // Initialize Arduino Digital Pins 12 as input for connecting Pushbutton
}
 
 
void loop()                     
{
  inputButtonState = digitalRead(12); //Read the Pushbutton state.
 
  if (inputButtonState == HIGH) 
  {     
    digitalWrite(8, HIGH);  //Switch on LED
    delay(250);
  } 
  else 
  {
    digitalWrite(8, LOW);   //Switch off LED
  }
 
}