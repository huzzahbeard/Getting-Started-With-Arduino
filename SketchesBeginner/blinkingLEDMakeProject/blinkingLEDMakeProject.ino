// Example 01 : Blinking LED

const int LED = 13; // LED connected to 
                   //digital pin 13
                   
void setup()
{
  pinMode(LED, OUTPUT); //sets the digital
                        //pin as output
}

void loop()
{
  digitalWrite(LED, HIGH); //Turns LED on
  delay(1000);             //delays one second
  digitalWrite(LED, LOW);  //Turns LED off
  delay(1000);             //delays one second
}
