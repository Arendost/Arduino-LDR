/* 5v
 * LDR_______--->A0
 * R=10k
 * GND
*/

const int LEDPin = 13;
const int LDRPin = A0;
const int threshold = 250; // valor en el cual se enciende el led si la 
                           // lectura supera este valor

void setup() 
{
pinMode(LEDPin,OUTPUT);
pinMode(LDRPin, INPUT);
}

void loop() 
{
int input = analogRead(LDRPin);


  if(input < threshold )
  {
    digitalWrite(LEDPin,HIGH);  
  }
  else
  {
    digitalWrite(LEDPin,LOW);
  }


}
