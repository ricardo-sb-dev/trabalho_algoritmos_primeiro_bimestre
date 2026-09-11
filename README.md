# Trabalho de Algoritmos — 1º Bimestre

Repositório referente ao Trabalho do 1º Bimestre da disciplina de **Algoritmos**, desenvolvido no curso de **Tecnologia em Análise e Desenvolvimento de Sistemas (ADS)** da Faculdade Senac Curitiba Portão.

Além de cumprir a atividade acadêmica e praticar os fundamentos de C++, este trabalho foi utilizado como uma oportunidade para exercitar, de forma prática, etapas de organização e desenvolvimento de software que fazem parte da rotina de projetos reais.

## Informações acadêmicas

- **Instituição:** Faculdade Senac Curitiba Portão
- **Curso:** Tecnologia em Análise e Desenvolvimento de Sistemas
- **Disciplina:** Algoritmos
- **Semestre:** 2026/2
- **Professora:** Dra. Caroline Mazetto Mendes
- **Avaliação:** Trabalho do 1º Bimestre
- **Tema transversal:** Cidadania e Direitos Humanos

## Objetivos e processo de desenvolvimento

O objetivo principal deste projeto é desenvolver os exercícios propostos na disciplina de Algoritmos, aplicando os conceitos iniciais de lógica de programação e desenvolvimento em C++.

Ao realizar o trabalho, também aproveitei a atividade como uma oportunidade para praticar, em sequência, um fluxo de desenvolvimento mais organizado:

1. Interpretar o enunciado e identificar o problema a ser resolvido.
2. Desenvolver a solução em C++ utilizando os conceitos estudados na disciplina.
3. Organizar cada exercício em seu próprio diretório, com nomes claros e consistentes.
4. Utilizar o Visual Studio Code como ambiente de desenvolvimento no Windows 11.
5. Utilizar o WSL (Windows Subsystem for Linux) para disponibilizar o ambiente Linux necessário ao toolchain de C/C++ integrado ao VS Code.
6. Testar e revisar as soluções antes de registrá-las no histórico.
7. Utilizar o Git para controlar as versões do projeto e registrar a evolução de cada exercício.
8. Utilizar o GitHub para hospedar o repositório e acompanhar seu histórico.
9. Criar mensagens de commit seguindo a convenção Conventional Commits, diferenciando implementação, correções, documentação, formatação e manutenção.
10. Documentar cada exercício em seu próprio README.md.
11. Utilizar `.gitignore` para evitar o versionamento de arquivos que não fazem parte do código-fonte, como executáveis e configurações locais.
12. Manter o repositório focado nos arquivos necessários para compreender e reproduzir o projeto, evitando o envio de artefatos gerados durante a compilação.

Assim, o repositório registra tanto o resultado da atividade acadêmica quanto a prática de organização, versionamento, documentação e manutenção de um projeto de código.

## Tecnologias e ferramentas

**Linguagem**
- C++ — linguagem utilizada para a implementação dos exercícios.

**Ambiente de desenvolvimento**
- Visual Studio Code — editor utilizado para escrever, organizar e executar os programas.
- Windows 11 — sistema operacional utilizado como ambiente principal de desenvolvimento.
- WSL (Windows Subsystem for Linux) — utilizado para disponibilizar o ambiente Linux necessário ao toolchain de C/C++ integrado ao VS Code no Windows.

**Controle de versão**
- Git — controle de versão local, registro das alterações e organização do histórico.
- GitHub — hospedagem do repositório remoto e acompanhamento da evolução do projeto.

## Práticas de versionamento

O projeto utiliza a convenção **Conventional Commits** para manter o histórico organizado e descritivo.

Principais tipos utilizados:

- `feat` — implementação de uma nova solução;
- `fix` — correção de um erro;
- `docs` — alteração ou complementação da documentação;
- `style` — alteração apenas de formatação;
- `refactor` — reorganização do código sem alterar seu comportamento;
- `chore` — manutenção e configuração do projeto.

As alterações são separadas de acordo com sua finalidade. Exemplo:

```
feat(exercicio-01): implementa cálculo da renda por pessoa e critério do Bolsa Família
fix(exercicio-01): corrige erro de digitação na saída
docs(exercicio-01): atualiza README com lógica e exemplos
```

Esse modelo permite acompanhar a evolução de cada exercício e identificar no histórico quando uma solução foi implementada, corrigida ou documentada.

## Organização e versionamento dos arquivos

Cada exercício possui seu próprio diretório, contendo o código-fonte e a documentação correspondente.

```
trabalho_algoritmos_primeiro_bimestre/
├── README.md
├── .gitignore
│
├── exercicio_01_beneficio_social/
│   ├── README.md
│   └── main.cpp
│
├── exercicio_02_meia_entrada/
│   ├── README.md
│   └── main.cpp
│
├── exercicio_03_direito_ao_voto/
│   ├── README.md
│   └── main.cpp
│
├── exercicio_04_imposto_de_renda/
│   ├── README.md
│   └── main.cpp
│
├── exercicio_05_decimo_terceiro/
│   ├── README.md
│   └── main.cpp
│
└── desafio_estrutura_de_repeticao/
    ├── README.md
    └── main.cpp
```

A nomenclatura dos diretórios utiliza letras minúsculas, `snake_case` e nomes descritivos, mantendo um padrão consistente em todo o projeto.

## Arquivos e artefatos não versionados

O arquivo `.gitignore` define quais arquivos e diretórios permanecem fora do controle de versão, entre eles:

- executáveis gerados pela compilação, como arquivos `.exe`;
- arquivos temporários;
- configurações locais do Visual Studio Code;
- arquivos e diretórios gerados por ferramentas de compilação;
- outros artefatos que não são necessários para o código-fonte e a documentação.

Dessa forma, o repositório mantém apenas os arquivos relevantes para o desenvolvimento, entendimento e documentação do projeto.

## Sobre o trabalho

As atividades apresentam situações-problema relacionadas ao tema transversal **Cidadania e Direitos Humanos** e têm como objetivo aplicar, na prática, os conceitos de lógica de programação estudados no início da disciplina.

O trabalho contempla exercícios envolvendo:

- entrada e saída de dados;
- variáveis e tipos de dados;
- operações aritméticas;
- operadores relacionais;
- operadores lógicos;
- expressões;
- estruturas condicionais;
- estruturas de repetição *(em andamento)*.

## Exercícios

### Exercício 01 — Acesso a benefício social
Calcula a renda por pessoa de uma família e verifica se ela atende ao critério de renda definido no enunciado.
**Conceitos:** entrada de dados, variáveis, tipos de dados, operações aritméticas e estruturas condicionais.
[Ver exercício](./exercicio_01_beneficio_social)

### Exercício 02 — Direito à meia-entrada
Verifica se uma pessoa possui direito à meia-entrada de acordo com sua idade e categoria, calculando o valor final do ingresso.
**Conceitos:** entrada e saída de dados, operações aritméticas, operadores relacionais, operadores lógicos e estruturas condicionais.
[Ver exercício](./exercicio_02_meia_entrada)

### Exercício 03 — Direito ao voto
Determina a situação de uma pessoa em relação ao voto a partir de sua idade.
**Conceitos:** entrada e saída de dados, operadores relacionais e estruturas condicionais.
[Ver exercício](./exercicio_03_direito_ao_voto)

### Exercício 04 — Cálculo simplificado de imposto de renda
Calcula o valor do imposto a pagar de acordo com as faixas e alíquotas simplificadas definidas no enunciado.
**Conceitos:** entrada e saída de dados, operações aritméticas, operadores relacionais e estruturas condicionais.
[Ver exercício](./exercicio_04_imposto_de_renda)

### Exercício 05 — Cálculo do 13º salário
Calcula o valor do 13º salário proporcional considerando o salário mensal e a quantidade de meses trabalhados.
**Conceitos:** entrada e saída de dados, variáveis, tipos de dados e operações aritméticas.
[Ver exercício](./exercicio_05_decimo_terceiro)

### Desafio — Estrutura de repetição *(em andamento)*
Amplia o exercício do 13º salário para permitir o processamento de vários funcionários utilizando uma estrutura de repetição.
**Conceitos:** estruturas de repetição, `for`, entrada de múltiplos dados e processamento sequencial.
[Ver desafio](./desafio_estrutura_de_repeticao)

## Caráter acadêmico

Atividade avaliativa individual da disciplina de Algoritmos.
