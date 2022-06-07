/*Disciplina: Algoritimos e Lógica de Programação II
Atividade 3 - Gerador de Cartelas de Bingo*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <stdbool.h>

void msgTitulo(){
	printf("-------------------------------------------\n");
	printf("------------ BINGO BENEFICENTE ------------\n");
	printf("----------- GERADOR DE CARTELAS -----------\n");
	printf("-------------------------------------------\n\n");
}

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int h, i, j, k, quantCartelas, cartela[10], numero;
	bool existe = false;
	
	msgTitulo();
	printf(" Qual a quantidade de cartelas desejadas?\n");
	printf(" -> ");
	scanf("%d", &quantCartelas);
	fflush(stdin);
	
	system("pause");
	system("cls");
	
	msgTitulo();
	srand( time(NULL) );
	
	for(h = 0; h < quantCartelas; h++){
		
		for(i = 0; i < 10; i++){
			numero = rand() % 99;
			
			for(j = 0; j <= i - 1; j++){
				
				if(numero == cartela[j]){
					existe = true;
					break;
				}	
			}
			if(existe == true){
				existe = false;
				i = i - 1;
			}
			else{
				cartela[i] = numero;
			}
		}
		
		printf("CARTELA Nº %d: \n\n",h + 1);
		for(k = 0; k < 10; k++){
			printf("%d ", cartela[k]);
		}
		printf("\n\n-------------------------------------------\n\n");
	}
	system("pause");
	return 0;
}
