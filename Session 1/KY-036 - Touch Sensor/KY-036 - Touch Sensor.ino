// ky-036 with buzzer
int buz = D1; 
int val;
int sensorpin = D0;
 
void setup() {
 pinMode (buz,OUTPUT);
 pinMode (sensorpin,INPUT);
}
 
void loop() {
val= digitalRead(sensorpin);
if (val==HIGH)
{
  tone(buz, 500, 500);
}
else
{
  tone(buz, 0, 0);
}

}
