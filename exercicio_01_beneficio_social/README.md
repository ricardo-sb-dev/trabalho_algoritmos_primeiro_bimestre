# Exercício 01 — Acesso a Benefício Social

Atividade integrante do Trabalho do 1º Bimestre da disciplina de Algoritmos, desenvolvida no curso de Tecnologia em Análise e Desenvolvimento de Sistemas (ADS) da Faculdade Senac Curitiba Portão.

## Objetivo

Desenvolver um programa que leia a renda mensal de uma família e o número de pessoas, calcule a renda por pessoa e verifique se a família atende ao critério de renda definido no enunciado.

## Entrada

O programa solicita:

* A renda familiar mensal, em reais.
* O número de pessoas da família.

## Processamento

A renda por pessoa é calculada dividindo a renda familiar pelo número de pessoas:

`rendaPorPessoa = rendaFamiliar / numeroDePessoas`

Em seguida, o programa verifica se a renda por pessoa é menor ou igual a R$ 218,00.

* Se `rendaPorPessoa <= 218`, a família atende ao critério de renda.
* Caso contrário, a família não atende ao critério de renda.

## Saída

O programa exibe:

* A renda por pessoa.
* Uma mensagem informando se a família atende ou não ao critério de renda do Bolsa Família.

## Conceitos praticados

* Entrada e saída de dados
* Variáveis
* Tipos de dados
* Operações aritméticas
* Estruturas condicionais

## Arquivo

* `main.cpp` — implementação do exercício em C++.

## Exemplos de execução

### Exemplo 1

```text
Entre com a renda familiar (R$): 800.00
Entre com o numero de pessoas: 5
Renda por pessoa: R$ 160
A familia atende ao criterio de renda do Bolsa Familia.
```

### Exemplo 2

```text
Entre com a renda familiar (R$): 1500.00
Entre com o numero de pessoas: 4
Renda por pessoa: R$ 375
A familia nao atende ao criterio de renda do Bolsa Familia.
```

## Caráter acadêmico

Atividade avaliativa individual da disciplina de Algoritmos.
