//IMPLEMENTACAO
#include <stdio.h>
#include <stdlib.h>
#include "inter.h"

Lista no(Item x, Lista p) {
	Lista n = malloc(sizeof(struct no));
	n->item = x;
	n->prox = p;
	return n;
}


void exibe (Lista L) {
	while(L!=NULL){
		printf(fmt, L->item);
		L = L->prox;
	}
}
