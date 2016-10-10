void setup() {
  Serial.begin(115200);
  // put your setup code here, to run once:

}

void loop() {
  Serial.print(0xF0);
  Serial.print(0x01);
  Serial.print(0x02);
  Serial.print(0x03);
  Serial.print(0x04);
  delay(2000);
  
  // put your main code here, to run repeatedly:

}
