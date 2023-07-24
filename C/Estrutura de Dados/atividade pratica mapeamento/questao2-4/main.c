#include <stdio.h>
#include <stdlib.h>
#include "deque.h"

int main() {
	Lista exemplo;
	int valor;
	criar(&exemplo);
	printf("Informe um valor a ser inserido na lista ou -1 para encerrar: ");
	scanf("%d", &valor);
	while(valor != -1){
		inserir(&exemplo, valor);
		printf("Informe um valor a ser inserido na lista ou -1 para encerrar: ");
		scanf("%d", &valor);
	}
	mostrar(exemplo);
	
	printf("Informe um valor a ser inserido no Comeco da lista: ");
	scanf("%d", &valor);
	insereComeco(&exemplo, valor);
	mostrar(exemplo);
	
	printf("Informe um valor a ser inserido no Final da lista: ");
	scanf("%d", &valor);
	insereFinal(&exemplo, valor);
	mostrar(exemplo);
	
	printf("Informe o valor a ser removido: ");
	scanf("%d", &valor);
	remover(&exemplo, valor);
	mostrar(exemplo);
	
	printf("Removendo valor do Comeco: \n");
	removeComeco(&exemplo);
	mostrar(exemplo);
	
	printf("Removendo valor do Final: \n");
	removeFinal(&exemplo);
	mostrar(exemplo);
	
	return 0;
}
