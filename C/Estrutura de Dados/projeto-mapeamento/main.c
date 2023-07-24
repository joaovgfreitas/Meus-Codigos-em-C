#include <stdio.h>
#include <stdlib.h>
#include "inter.h"

int main() {
	Chave mat;
	Valor nome;
	char x;
	Map ma = NULL;
	printf("Digite as seguintes letras para realizar uma funcao: ");
	printf("\n'I' para Inserir");
	printf("\n'R para Remover'");
	printf("\n'P' para procurar");
	printf("\n'L' para Listar");
	printf("\n'D' para Destruir");
	printf("\n'S' para Sair\n");
	scanf("%c",&x);
	while (x!='S'){
		if (x=='I'||x=='i'){
			printf("Digite a matricula: ");
			scanf("%i",&mat);
			printf("Digite o nome: ");
			scanf("%s",nome);
			inserir(mat, nome, &ma);
			listar(ma);
		}
		scanf("%c",&x);	
		if (x=='R'||x=='r'){
			printf("Digite a matricula para remover: ");
			scanf("%i",&mat);
			remover(mat, &ma);
			printf("\nRemovido");
		}
		//Falta adicionar pra ele mostrar se pertence ou não
		if (x=='P'||x=='p'){
			printf("Digite a matricula que quer procurar: ");
			scanf("%i",&mat);
			printf("Digite o nome que quer procurar: ");
			scanf("%s",nome);
			pertence(mat, nome, ma);	
		}
		if (x=='L'||x=='l'){
			listar(ma);
		}
		if (x=='D'||x=='d'){
			destroi(&ma);
			printf("Destruido!");
		}
		
	}
	return 0;
}








