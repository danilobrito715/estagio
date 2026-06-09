const int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("Projeto de lançamento vertical iniciado");
}

void loop() {
  Serial.println("Contagem regressiva: 5");
  for (int i = 5; i >= 1; i--) {
    digitalWrite(ledPin, HIGH);
    delay(200);
    digitalWrite(ledPin, LOW);
    delay(800);
    Serial.print("Tempo: ");
    Serial.println(i);
  }

  Serial.println("Lançar!");
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(3000);
}
