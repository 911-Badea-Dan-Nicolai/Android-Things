
int moisture_signal = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int moisture = analogRead(moisture_signal);

  if(moisture > 500) {
    Serial.println("Soil is too dry");
  } else {
    Serial.println("Soil is wet enough");
  }

  delay(500);
}
