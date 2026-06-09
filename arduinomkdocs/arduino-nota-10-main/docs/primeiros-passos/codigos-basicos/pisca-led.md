# Pisca LED

Este projeto é um dos primeiros exemplos para entender como o Arduino controla um LED.

## Descrição

- Acende e apaga um LED de forma contínua.
- Ensina o conceito de saída digital e de temporização com `delay()`.

## Código Arduino

```cpp
int led = 12;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);
  delay(100);
  digitalWrite(led, LOW);
  delay(100);
}
```

## Componentes

- Arduino Uno
- LED
- resistor 220 Ω
- cabos de conexão

## Uso em sala de aula

Use este experimento para introduzir os conceitos de circuito, fluxo de corrente e comandos básicos de programação.
