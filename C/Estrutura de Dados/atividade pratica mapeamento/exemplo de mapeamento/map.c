#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "map.h"

Map no_map(Chave c, Valor v, Map p){
	Map novo = (Map)malloc(sizeof(struct map));
	strcpy(novo->chave, c);
	strcpy(novo->valor, v);
	novo->prox = p;
	return novo;
}

void inserir(Chave c, Valor v, Map *M){
	while(*M != NULL && strcmp((*M)->chave, c) == -1){
		M = &(*M)->prox;
	}
	if( *M != NULL && strcmp((*M)->chave, c) == 0){
		strcpy((*M)->valor, v);
	}else{
		*M = no_map(c,v,*M);
	}
}

int remover(Chave c, Map *M){
	while(*M != NULL && strcmp((*M)->chave, c) == -1){
		M = &(*M)->prox;
	}
	if( *M == NULL || strcmp((*M)->chave, c) == 1){
		return 0;
	}else{
		Map aux = *M;
		*M = aux->prox;
		free(aux);
		return 1;
	}
}

int pertence(Chave c, Valor v, Map M){
	while ( M != NULL && strcmp((*M).chave, c) == -1){
		M = M->prox;
	}
	if( M!= NULL && strcmp((*M).chave, c) == 0){
		strcpy(v, M->valor);
	}
	return( M != NULL && strcmp((*M).chave, c) == 0);
}

void exibe(Map M){
	printf("[");
	while( M != NULL){
		printf("(%s : %s)", M->chave, M->valor);
		if(M->prox != NULL){
			printf(", ");
		}
		M = M->prox;
	}
	printf("]\n");
}

void destroi(Map *M){
	Map aux;
	while( *M != NULL){
		aux = *M;
		*M = aux->prox;
		free(aux);
	}
}


void exibeEnd(Map M){
	printf("[");
	while( M != NULL){
		printf("(%X : %X : %X)", &M->chave, &M->valor, &M->prox);
		if(M->prox != NULL){
			printf(", ");
		}
		M = M->prox;
	}
	printf("]\n");
}
