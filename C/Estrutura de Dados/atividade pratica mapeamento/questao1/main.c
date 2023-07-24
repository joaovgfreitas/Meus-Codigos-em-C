#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listEnc.h"

int main() {
	
	Lista exemplo;
	char val[30];
	criar(Chave x, Valor y, &exemplo);
	printf("Informe um valor a ser inserido na lista ou -1 para encerrar: ");
	scanf("%s",val);
	while(val != -1){
		inserir(&exemplo, val);
		printf("Informe um valor a ser inserido na lista ou -1 para encerrar: ");
		scanf("%s",val);
	}
	mostrar(exemplo);
	printf("Informe o valor a ser pesquisado: ");
	scanf("%s",val);
	pesquisar(exemplo, val);
	printf("Informe o valor a ser removido: ");
	scanf("%s",val);
	remover(&exemplo, val);
	mostrar(exemplo);
	return 0;
}
