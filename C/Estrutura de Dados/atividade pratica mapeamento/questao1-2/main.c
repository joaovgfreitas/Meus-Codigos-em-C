#include <stdio.h>
#include <stdlib.h>
#include "listEnc.h"

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
	printf("Informe o valor a ser pesquisado: ");
	scanf("%d", &valor);
	pesquisar(exemplo, valor);
	printf("Informe o valor a ser removido: ");
	scanf("%d", &valor);
	remover(&exemplo, valor);
	mostrar(exemplo);
	return 0;
}
