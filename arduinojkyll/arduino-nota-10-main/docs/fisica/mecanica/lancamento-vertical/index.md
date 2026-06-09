# Lançamento Vertical

Este projeto apresenta uma proposta de aula de Física usando Arduino para discutir movimento vertical e tempo de resposta.

## Objetivos

- Introduzir o conceito de movimento vertical em queda ou lançamento.
- Mostrar como sensores e luzes podem apoiar a explicação em sala de aula.
- Fornecer material direto para o professor preparar a atividade.

## Conteúdo didático

- Conceito de lançamento vertical e gravidade.
- Relação com a BNCC: experimentação, análise de resultados e interpretação de dados.
- Uso do Arduino como ferramenta de apoio.

## Arquivos do projeto

- `experimento.ino` — código de controle do circuito.
- `slides/` — material de apresentação para a aula.
- `latex/plano_de_aula.tex` — documento de planejamento.
- `latex/roteiro_alunos.tex` — roteiro de atividades para os estudantes.
- `imagens/` — espaço para esquemas e fotos.

## Código de exemplo

```cpp
const int ledCount = 13;

void setup() {
  pinMode(ledCount, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println("Contagem regressiva para o lançamento vertical...");
  for (int i = 5; i >= 1; i--) {
    digitalWrite(ledCount, HIGH);
    delay(200);
    digitalWrite(ledCount, LOW);
    delay(800);
    Serial.print(i);
    Serial.println("...\n");
  }

  Serial.println("Lançar!\n");
  digitalWrite(ledCount, HIGH);
  delay(1000);
  digitalWrite(ledCount, LOW);
  delay(3000);
}
```

## Observação

Use o código acima como ponto de partida. O projeto pode ser expandido com sensores de distância ou cronômetros para medir o tempo de subida e de queda.
