# Exercício 02 — Direito à Meia-Entrada

Atividade integrante do Trabalho do 1º Bimestre da disciplina de Algoritmos, desenvolvida no curso de Tecnologia em Análise e Desenvolvimento de Sistemas (ADS) da Faculdade Senac Curitiba Portão.

## Objetivo

Desenvolver um programa que leia o valor de um ingresso, a idade da pessoa e sua categoria, verificando se ela possui direito à meia-entrada e calculando o valor a pagar.

## Entrada

O programa solicita:

* O valor do ingresso, em reais.
* A idade da pessoa.
* A categoria:

  * `1` — Estudante
  * `2` — Professor
  * `3` — Nenhuma das anteriores

## Processamento

O programa calcula o valor da meia-entrada dividindo o valor do ingresso por 2.

A pessoa tem direito à meia-entrada quando pelo menos uma das seguintes condições é atendida:

* idade maior ou igual a 60 anos;
* categoria igual a 1 (estudante);
* categoria igual a 2 (professor).

Quando uma dessas condições é atendida, o programa informa que a meia-entrada foi concedida e exibe o valor correspondente.

Caso nenhuma das condições seja atendida, o programa informa que o ingresso é inteiro e exibe o valor total.

## Saída

O programa informa:

* Se a pessoa possui ou não direito à meia-entrada.
* O valor a pagar.

## Conceitos praticados

* Entrada e saída de dados
* Variáveis
* Tipos de dados
* Operações aritméticas
* Operadores relacionais
* Operadores lógicos
* Estruturas condicionais

## Arquivo

* `main.cpp` — implementação do exercício em C++.

## Exemplos de execução

### Exemplo 1

```text
Entre com o valor do ingresso (R$): 50.00
Entre com a idade: 20
Selecione a categoria:
1 - Estudante
2 - Professor
3 - Nenhuma das anteriores
Opção: 1
Direito à meia-entrada confirmado!
Valor a pagar: R$ 25.00
```

### Exemplo 2

```text
Entre com o valor do ingresso (R$): 60.00
Entre com a idade: 65
Selecione a categoria:
1 - Estudante
2 - Professor
3 - Nenhuma das anteriores
Opção: 3
Direito à meia-entrada confirmado!
Valor a pagar: R$ 30.00
```

### Exemplo 3

```text
Entre com o valor do ingresso (R$): 40.00
Entre com a idade: 35
Selecione a categoria:
1 - Estudante
2 - Professor
3 - Nenhuma das anteriores
Opção: 3
Ingresso inteiro.
Valor a pagar: R$ 40.00
```

## Caráter acadêmico

Atividade avaliativa individual da disciplina de Algoritmos.
