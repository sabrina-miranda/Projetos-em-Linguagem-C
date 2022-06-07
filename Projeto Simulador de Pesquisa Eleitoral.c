/*Disciplina: Algoritimos e Lógica de Programação II
Atividade 1 - Pesquisa Eleitoral(Simulador)*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int menu=0;
	int candidato_v1 = 0, candidato_v2 = 0, candidato_v3 = 0, nulo_v = 0, invalido_v = 0, voto_v; /* VEREADOR */
	int candidato_p1 = 0, candidato_p2 = 0, nulo_p = 0, invalido_p = 0, voto_p; /* PREFEITO */
		
	printf("\n-------> OLÁ, SEJA BEM VINDO! <------ \n\n");
	
	while(menu <= 2){
		printf("-------------------------------------\n");
		printf("-------- PESQUISA ELEITORAL ---------\n");
		printf("-------------------------------------\n\n");
		printf("Escolha a opção desejada:\n");
		printf("(em seguida pressione Enter)\n\n");	 
		printf("-> 1 - VOTAR\n");
		printf("-> 2 - APURAR VOTAÇÃO\n");
		printf("-> 3 - SAIR\n\n");
		printf("-> ");
		scanf("%d",&menu);
		fflush(stdin);
		
		system("cls");
		
		switch(menu){
			case 1:		
					printf("-----------------------------------------------\n");
					printf("------------------- VEREADOR ------------------\n");
					printf("-----------------------------------------------\n");
					printf("Digite o número do seu candidato:\n");
					printf("(em seguida pressione Enter)\n\n");	 
					printf("-> JOÃO DO FRETE - 111\n");
					printf("-> MARIA DA PAMONHA - 222\n");
					printf("-> ZÉ DA FARMÁCIA - 333\n");
					printf("-> NULO - 444\n\n");
					printf("-> ");
					scanf("%d",&voto_v);
					fflush(stdin);
					
					switch(voto_v){
						case 111:
							candidato_v1 = candidato_v1 + 1;
							printf("Voto em JOÃO DO FRETE computado com sucesso!\n");
							printf("-----------------------------------------------\n\n");
							break;
						case 222:
							candidato_v2 = candidato_v2 + 1;
							printf("Voto em MARIA DA PAMONHA computado com sucesso!\n");
							printf("-----------------------------------------------\n\n");
							break;
						case 333:
							candidato_v3 = candidato_v3 + 1;
							printf("Voto em ZÉ DA FARMÁCIA computado com sucesso!\n");
							printf("-----------------------------------------------\n\n");
							break;
						case 444:
							nulo_v = nulo_v + 1;
							printf("Voto NULO computado com sucesso!\n");
							printf("-----------------------------------------------\n\n");
							break;
						default:
							invalido_v = invalido_v + 1;
							printf("Candidato inexistente. VOTO INVALIDADO!\n");
							printf("-----------------------------------------------\n\n");
							break;	
					}
					system("pause");
					system("cls");
					
					printf("-----------------------------------------------\n");
					printf("------------------- PREFEITO ------------------\n");
					printf("-----------------------------------------------\n");
					printf("Digite o número do seu candidato:\n");
					printf("(em seguida pressione Enter)\n\n");	 
					printf("-> Dr. ZURETA - 11\n");
					printf("-> SENHOR GOMES - 22\n");
					printf("-> NULO - 44\n\n");
					printf("-> ");
					scanf("%d",&voto_p);
					fflush(stdin);
					
					switch(voto_p){
						case 11:
							candidato_p1 = candidato_p1 + 1;
							printf("Voto em Dr. ZURETA computado com sucesso!\n");
							printf("-----------------------------------------------\n\n");
							break;
						case 22:
							candidato_p2 = candidato_p2 + 1;
							printf("Voto em SENHOR GOMES computado com sucesso!\n");
							printf("-----------------------------------------------\n\n");
							break;
						case 44:
							nulo_p = nulo_p + 1;
							printf("Voto NULO computado com sucesso!\n");
							printf("-----------------------------------------------\n\n");
							break;
						default:
							invalido_p = invalido_p + 1;   
							printf("Candidato inexistente. VOTO INVALIDADO!\n");
							printf("-----------------------------------------------\n\n");
							break;
					}
					system("pause");
					system("cls");
				break;		
					
			case 2:
				printf("--------------------------------------\n");
				printf("----------- APURAÇÃO FINAL -----------\n");
				printf("--------------------------------------\n\n");
				printf("-> VEREADOR:\n\n");
				printf("> JOÃO DO FRETE - %d votos\n",candidato_v1);
				printf("> MARIA DA PAMONHA - %d votos\n",candidato_v2);
				printf("> ZÉ DA FARMÁCIA - %d votos\n",candidato_v3);
				printf("> NULOS - %d votos\n",nulo_v);
				printf("> INVALIDADOS - %d votos\n\n",invalido_v);
				printf("--------------------------------------\n\n");
				printf("-> PREFEITO:\n\n");
				printf("> Dr. ZURETA - %d votos\n",candidato_p1);
				printf("> SENHOR GOMES - %d votos\n",candidato_p2);
				printf("> NULOS - %d votos\n",nulo_p);
				printf("> INVALIDADOS - %d votos\n\n",invalido_p);
				printf("--------------------------------------\n\n");
				system("pause");
				system("cls");	
				break;	
				
			case 3:	
				printf("\nProcesso Finalizado!\n");
				printf("--------------------------------------\n\n");
				system("pause");
				break;	
				
			default:
				printf("\nOpção inválida. Processo Finalizado!\n");
				printf("--------------------------------------\n\n");
				system("pause");
				break;				
		}	
	}	
	return 0;
}
