# Desafio — Estrutura de Repetição

Atividade integrante do Trabalho do 1º Bimestre da disciplina de Algoritmos, desenvolvida no curso de Tecnologia em Análise e Desenvolvimento de Sistemas (ADS) da Faculdade Senac Curitiba Portão.

## Objetivo

Desenvolver um programa que utilize uma estrutura de repetição para calcular o 13º salário proporcional de vários funcionários sem a necessidade de executar o programa novamente para cada funcionário.

## Entrada

O programa solicita:

* O número de funcionários da empresa.
* Para cada funcionário:

  * O salário mensal.
  * A quantidade de meses trabalhados no ano.

## Processamento

O programa utiliza uma estrutura de repetição `for` para processar os dados de cada funcionário.

Para cada funcionário, o valor do 13º salário proporcional é calculado utilizando a fórmula:

`13º Salário = (Salário Mensal / 12) × Meses Trabalhados`

A repetição continua até que todos os funcionários informados sejam processados.

## Saída

Para cada funcionário, o programa exibe:

* O número do funcionário.
* O valor do 13º salário proporcional.

## Conceitos praticados

* Entrada e saída de dados
* Variáveis
* Tipos de dados
* Operações aritméticas
* Estruturas de repetição
* Estrutura `for`
* Processamento sequencial

## Arquivo

* `main.cpp` — implementação do desafio em C++.

## Exemplo de execução

```text
Entre com o numero de funcionarios: 3

Funcionario 1:
Entre com o salario mensal: 1621.00
Entre com os meses trabalhados: 6
Valor do 13 salario: R$ 810.5

Funcionario 2:
Entre com o salario mensal: 2550.50
Entre com os meses trabalhados: 12
Valor do 13 salario: R$ 2550.5

Funcionario 3:
Entre com o salario mensal: 3000.00
Entre com os meses trabalhados: 8
Valor do 13 salario: R$ 2000
```

## Caráter acadêmico

Atividade avaliativa individual da disciplina de Algoritmos.