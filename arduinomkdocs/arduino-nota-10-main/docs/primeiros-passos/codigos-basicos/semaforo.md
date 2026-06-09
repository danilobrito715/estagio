# Semáforo

Este projeto demonstra o funcionamento básico de um semáforo com LEDs.
É ideal para apresentar lógica sequencial e temporização em sala de aula.

## Descrição

- Simula as fases de um semáforo: vermelho, amarelo e verde.
- Usa três LEDs conectados ao Arduino.
- Pode ser apresentado como um exemplo de automação simples.

## Código Arduino

```cpp
int led_vermelho = 11;
int led_amarelo = 12;
int led_verde = 13;

void setup() {
  pinMode(led_vermelho, OUTPUT);
  pinMode(led_amarelo, OUTPUT);
  pinMode(led_verde, OUTPUT);
}

void loop() {
  digitalWrite(led_verde, HIGH);
  delay(3000);
  digitalWrite(led_verde, LOW);

  digitalWrite(led_amarelo, HIGH);
  delay(3000);
  digitalWrite(led_amarelo, LOW);

  digitalWrite(led_vermelho, HIGH);
  delay(3000);
  digitalWrite(led_vermelho, LOW);
}
```

## Componentes

- Arduino Uno
- 3 LEDs
- 3 resistores de 220 Ω
- cabos de conexão

## Link do projeto

Este exemplo também pode ser explorado no Tinkercad como uma simulação interativa.
