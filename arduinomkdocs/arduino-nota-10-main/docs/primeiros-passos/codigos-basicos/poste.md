# Poste

Este projeto usa um sensor de luz para acender um LED quando o ambiente estiver escuro.
É um exemplo simples de projeto com controle de iluminação.

## Descrição

- Usa um sensor LDR para medir a luz ambiente.
- Aciona um LED em condições de pouca luz.
- Introduz o conceito de leitura analógica e controle digital.

## Código Arduino

```cpp
int ldr = A0;
int valorldr = 0;
int led = 12;

void setup() {
  pinMode(ldr, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  valorldr = analogRead(ldr);
  if (valorldr <= 500) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
  Serial.println(valorldr);
  delay(200);
}
```

## Componentes

- Arduino Uno
- sensor LDR
- LED
- resistor 220 Ω
- cabos de conexão

## Aplicação

Este exemplo pode ser usado para discutir a importância da iluminação em espaços urbanos e em projetos de automação.
