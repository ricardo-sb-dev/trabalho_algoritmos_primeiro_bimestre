# Exercício 04 — Cálculo Simplificado de Imposto de Renda

Atividade integrante do Trabalho do 1º Bimestre da disciplina de Algoritmos, desenvolvida no curso de Tecnologia em Análise e Desenvolvimento de Sistemas (ADS) da Faculdade Senac Curitiba Portão.

## Objetivo

Desenvolver um programa que leia o salário bruto de uma pessoa e calcule o valor do imposto de renda a pagar de acordo com as faixas e alíquotas simplificadas definidas no enunciado.

## Entrada

O programa solicita:

* O salário bruto mensal, em reais.

## Processamento

O programa verifica o salário bruto e aplica a regra correspondente:

* Até R$ 5.000,00: isento de imposto.
* De R$ 5.000,01 a R$ 7.350,00: aplica alíquota de 15%.
* Acima de R$ 7.350,00: aplica alíquota de 27,5%.

Quando houver imposto a pagar, o valor é calculado multiplicando o salário bruto pela alíquota correspondente.

## Saída

O programa exibe:

* Uma mensagem informando que a pessoa é isenta, quando o salário é de até R$ 5.000,00.
* O valor do imposto a pagar, quando houver incidência.

## Conceitos praticados

* Entrada e saída de dados
* Variáveis
* Tipos de dados
* Operações aritméticas
* Operadores relacionais
* Estruturas condicionais

## Arquivo

* `main.cpp` — implementação do exercício em C++.

## Exemplos de execução

### Exemplo 1

```text
Entre com o salario bruto (R$): 5000.00
Isento de imposto de renda
```

### Exemplo 2

```text
Entre com o salario bruto (R$): 7000.00
Imposto a pagar: R$ 1050
```

### Exemplo 3

```text
Entre com o salario bruto (R$): 10000.00
Imposto a pagar: R$ 2750
```

## Caráter acadêmico

Atividade avaliativa individual da disciplina de Algoritmos.