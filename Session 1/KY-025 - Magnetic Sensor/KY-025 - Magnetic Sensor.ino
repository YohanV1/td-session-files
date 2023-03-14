// ky-025 with buzzer
int buz = D1; // define the LED pin
int digitalPin = D0; // KY-025 digital interface
int analogPin = A0; // KY-025 analog interface
int digitalVal; // digital readings
int analogVal; //analog readings
void setup()
{
  pinMode(buz, OUTPUT);
  pinMode(digitalPin, INPUT);
  pinMode(analogPin, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  // Read the digital interface
  digitalVal = digitalRead(digitalPin); 
  if(digitalVal == HIGH) // if magnetic field is detected
  {
    tone(buz, 500, 500);// turn ON buzzer
  }
  else
  {
    tone(buz, 0, 0);// turn OFF buzzer
  }
  delay(100);
}