int soil_pin = A0;

void setup() {
  Serial.begin(9600);
  analogReference(EXTERNAL);
}

void loop() {
  Serial.print("Soil Moisture Sensor Voltage: ");
  Serial.print((float(analogRead(soil_pin))/1023.0)*3.3);
  Serial.println(" V");
  delay(100);
}