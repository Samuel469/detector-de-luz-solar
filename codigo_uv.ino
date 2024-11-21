const int analogPin = A0; // Pin analógico donde está conectado el sensor UV

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(analogPin);
  float voltage = sensorValue * (5.0 / 1023.0); // Convertir a voltaje
  
  // Mapear el voltaje a un valor más legible (por ejemplo, de 0 a 100)
  int mappedValue = map(sensorValue, 0, 1023, 0, 100);

  Serial.print("Voltaje UV: ");
  Serial.print(voltage);
  Serial.print(" V");
  Serial.print("  Valor mapeado: ");
  Serial.println(mappedValue);

  delay(1000);
}
