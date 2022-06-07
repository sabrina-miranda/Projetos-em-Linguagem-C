# Projetos/Atividades em Linguagem C

## Descrição:

Atividades/Projetos simples em linguagem C, realizados durante a faculdade de Engenharia de Software, na disciplina de Algoritmos e Lógica de Programação II.

Os programas aqui contidos foram desenvolvidos no DevC++.

Esses projetos foram a minha primeira experiência com uma linguagem de programação.

## Projetos:

### 1. Projeto Simulador de Pesquisa Eleitoral

#### Objetivo da atividade proposta:

Criar um programa eleitoral em C para simular uma votação.

* Os candidatos pesquisados ​​eram:

> Para Vereador:

111 - Vereador João do Frete

222 - Vereador Maria da Pamonha

333 - Vereador Zé da Farmácia

444 - Voto Nulo

> Para Prefeito:

11 - Prefeito Dr. Zureta

22 - Prefeito Senhor Gomes

44 - Voto Nulo

* O programa deveria apresentar um menu com 3 opções:

1 - Votar

2 - Apuração dos votos

3 - Sair

Na opção 1, os candidatos foram votados através do número se o número digitado não consta-se na lista inválida.

Na opção 2, seria mostrado a soma de todos os votos computados

Na opção 3, o programa se encerraria

### 2. Projeto Gerador de Cartelas de Bingo

#### Objetivo da atividade proposta:

Criar um programa em C, que gera-se de forma aleatória as cartelas do bingo.

* Criar uma opção para digitar a quantidade de cartelas a serem criadas

* Cada cartela do bingo deveria ser armazenada em um vetor de tamanho 10.

* Os números da cartela deveriam ser de 0 a 99

* A cartela não poderia ter números repetidos, deveria ser feita uma conferência.

### 3. Projeto Sistema de Triagem Covid-19

#### Objetivo da atividade proposta:

Criar um programa que faça uma triagem inicial através de totens eletrônicos que serão disponibilizados no pronto atendimento, agilizando assim o atendimento e fazendo a separação dos suspeitos de COVID-19 dos não suspeitos, garantindo um distanciamento e redução da infecção gerado pelas filas.

* Neste programa o paciente chegaria ao totem e faria um cadastro prévio indicando os seguintes dados:

> CPF

> Nome

> Sexo

> Idade

* Após o cadastro o paciente responderia um questionário de sintomas, no qual cada sintoma teria um peso para avaliação do risco de COVID.

> Tem Febre? (5 pontos)

> Tem dor de cabeça? (1 ponto)

> Tem secreção nasal ou espirros? (1 ponto)

> Tem dor/irritação na garganta? (1 ponto)

> Tem tosse seca? (3 pontos)

> Tem dificuldade respiratória? (10 pontos)

> Tem dores no corpo? (1 ponto)

> Tem diarréia? (1 ponto)

> Esteve em contato, nos últimos 14 dias, com um caso diagnosticado com COVID-19? (10 pontos)

> Esteve em locais com grande aglomeração? (3 pontos)

* Caso o usuário indica-se que SIM (S), seria somado o valor, caso indica-se NÃO (N) não seria somado o valor.

* Após preenchimento do questionário, deveria-se indicar em qual ala o paciente teria que se dirigir.

O encaminhamento seria feito para 3 alas: Risco Baixo, Risco Médio e Risco Alto.

> Risco Baixo - Total de pontos: de 0 a 9;

> Risco Médio - Total de pontos: de 10 a 19;

> Risco Alto - Total de pontos: de 20 ou mais pontos.

* Para finalizar deveria ser salvo em um arquivo, os dados do paciente e qual sua pontuação de sintomas, para que fosse realizada possíveis auditorias por parte da direção do hospital.