// ky-039
void setup() {
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop() {
  float pulse;
  int sum = 0;
  pulse = 950 - analogRead(A0);
  Serial.println(pulse);
  delay(100);
}