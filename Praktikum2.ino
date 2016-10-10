void setup() {
  Serial.begin(115200);
  // put your setup code here, to run once:

}

void loop() {
  Serial.print(0xF0);
  Serial.print(0xF1);
  Serial.print(0x02);
  Serial.print(0xF3);
  Serial.print(0x04);
  delay(5000);
  
  // put your main code here, to run repeatedly:

}
