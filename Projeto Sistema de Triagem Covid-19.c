/*Disciplina: Algoritimos e L�gica de Programa��o II
Atividade MAPA - Sistema de Triagem Covid-19*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void msgTitulo(){
	//Mensagem principal do programa
	printf("----------------------------------------------------------------------------\n");
	printf("======================= TRIAGEM PACIENTES - COVID-19 =======================\n");
	printf("----------------------------------------------------------------------------\n");
}

struct paciente{	
	char cpf[12];
	int idade;
	char nome[50]; 
	char sexo;	
};

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	FILE *arquivo;
	struct paciente cadastro;
	char resposta;
	int tPontuacao = 0, menu, l;
	
	//Perguntas do qestion�rio Covid-19
	char pergunta[10][200] = {
	"\n Tem Febre, S/N ? ",
	"\n Tem dor de cabe�a, S/N ? ",
	"\n Tem secre��o nasal ou espirros, S/N ? ",
	"\n Tem dor/irrita��o na garganta, S/N ? ",
	"\n Tem tosse seca, S/N ? ",
	"\n Tem dificuldade respirat�ria, S/N ? ",
	"\n Tem dores no corpo, S/N ? ",
	"\n Tem diarr�ia, S/N ? ",
	"\n Esteve em contato, nos �ltimos 14 dias, com um caso diagnosticado com COVID-19, S/N ? ",
	"\n Esteve em locais com grande aglomera��o, S/N ? " };
	
	//Pontos relacionados para cada pergunta do question�rio
	int pontos[10] = {5,1,1,1,3,10,1,1,10,3};
	
	msgTitulo();
	printf("\n O QUE VOC� DESEJA FAZER?\n\n");
	printf("----------------------- > CADASTRAR (1) | SAIR (2) < -----------------------\n");
	scanf("%d", &menu);
	fflush(stdin);
	
	
	system("cls");
	
	switch(menu){
		
		case 1:
			//Cadastro paciente
	    	msgTitulo();
			printf("\n CADASTRO PACIENTE\n\n");
	
			printf(" - Digite o seu CPF (somente n�meros): ");
			scanf("%12[^\n]s", &cadastro.cpf);
			fflush(stdin);
			printf(" - Digite o seu NOME: ");
			scanf("%50[^\n]s", &cadastro.nome);
			fflush(stdin);
			printf(" - Informe o seu SEXO (M/F): ");
			scanf("%c", &cadastro.sexo);
			fflush(stdin);
			printf(" - Informe a sua IDADE: ");
			scanf("%d", &cadastro.idade);
			fflush(stdin);
	
			printf("\n----------------------------------------------------------------------------\n\n");
			printf(" CPF: %s \n",cadastro.cpf);	
			printf(" NOME: %s \n",cadastro.nome);
			printf(" SEXO: %c \n",cadastro.sexo);	
			printf(" IDADE: %d \n",cadastro.idade);	
			printf("\n -> Dados PACIENTE cadastrados com SUCESSO!\n");
			printf("\n----------------------------------------------------------------------------\n\n");

			system("pause");
			system("cls");
			
			//Questin�rio
			msgTitulo();
			printf("\n QUESTION�RIO DE SINTOMAS \n");
			printf(" Responda (S) Sim e (N) N�o: \n\n");
			
			for(l = 0 ; l < 10 ; l++){
				
				printf("%s", pergunta[l]);
				scanf("%c", &resposta);
				fflush(stdin);
				
				//Mensagem de erro e repeti��o da pergunta
				while((resposta != 'S') && (resposta != 's') && (resposta != 'N') && (resposta != 'n')){
					printf(" -> OP��O INV�LIDA! Favor, responder novamente a pergunta. <-\n");
					printf("%s", pergunta[l]);
					scanf("%c", &resposta);
					fflush(stdin);
				}	
				//Soma dos pontos do question�rio
				if((resposta == 'S') || (resposta == 's')){
					tPontuacao = tPontuacao + pontos[l];
				}
			}	
	
			printf("\n----------------------------------------------------------------------------\n\n");
			system("pause");
			system("cls");
			
			//Encaminhamento do paciente para ala equivalente a sua pontua��o no question�rio
			msgTitulo();
			printf("\n PACIENTE: %s \n",cadastro.nome);	
			printf(" TOTAL PONTUA��O: %d\n\n",tPontuacao);

			if(tPontuacao <= 9){
				printf(" RISCO BAIXO para Covid-19\n");	
				printf(" -> Dirija-se a ala VERDE, obrigado!\n\n");	
			}
	
			else{
				if((tPontuacao >= 10) && (tPontuacao <=19)){
					printf(" RISCO M�DIO para Covid-19\n");
					printf(" -> Dirija-se a ala AMARELA, obrigado!\n");	
				}
				else{
					printf(" RISCO ALTO para Covid-19\n");
					printf(" -> Dirija-se a ala VERMELHA, obrigado!\n\n");
				}
			}
			printf("----------------------------------------------------------------------------\n\n");
			
			system("pause");
			system("cls");
			
			main();
			
			//Escevendo/Salvando dados do paciente no arquivo
			arquivo = fopen("atendimentos.txt","a");
			fprintf(arquivo, " PACIENTE\n\n");
			fprintf(arquivo, " NOME: %s\n",cadastro.nome);
			fprintf(arquivo, " CPF: %s\n",cadastro.cpf);	
			fprintf(arquivo, " SEXO: %c\n",cadastro.sexo);	
			fprintf(arquivo, " IDADE: %d\n",cadastro.idade);	
			fprintf(arquivo, " TOTAL PONTUA��O: %d\n",tPontuacao);
			fprintf(arquivo, "----------------------------------------------------------------------------\n");
			fclose(arquivo);
	
			break;
			
		case 2:
			//Mensagem para sair do programa
			msgTitulo();
			printf("\n PREVINA-SE!\n");
			printf("\n A preven��o � a melhor prote��o para voc� e sua fam�lia.\n\n");
			printf("----------------------------------------------------------------------------\n");
			system("pause");
			break;	
			
		default:
			//Mensagem de erro na escolha do menu
			msgTitulo();
			printf("\n OP��O INV�LIDA! Favor, escolha uma das op��es dispon�veis.\n\n");
			printf("----------------------------------------------------------------------------\n");
			system("pause");
			system("cls");
			main();
			break;		
	}
		 	
	return 0;
}
