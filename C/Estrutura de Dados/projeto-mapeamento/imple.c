//IMPLEMENTAÇÃO
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "inter.h"

Map no_map(Chave c, Valor v, Map p){
	Map novo = (Map)malloc(sizeof(struct map));
	novo->chave = c;
	strcpy(novo->valor, v);
	novo->prox = p;
	return novo;
}

void inserir(Chave c, Valor v, Map *M){
	while ( *M != NULL && (*M)->chave < c){
		M = &(*M)->prox;
	}
	if ( *M != NULL && (*M)->chave == c){
		strcpy((*M)->valor, v);
	}else{
		*M = no_map (c, v, *M);}
}

int remover (Chave c, Map *M){
	while (*M != NULL && (*M)->chave<c){
		M = &(*M)->prox;
	}
	if (*M == NULL || (*M)->chave > c){
		return 0;
	}else{
		Map aux = *M;
		*M = aux->prox;
		free(aux);
		return 1;
	}
}

int pertence(Chave c, Valor v, Map M){
	while (M != NULL && M->chave < c){
		M = M->prox;
	}
	if (M != NULL && M->chave == c){
		strcpy(v, M->valor);
	}
	return (M != NULL && M->chave == c);
}

void listar (Map M){
	printf("[");
	while (M != NULL){
		printf("(%d : %s)", M->chave, M->valor);
		if (M->prox != NULL){
			printf(", ");
		}
		M = M->prox;
	}
	printf("]\n");
}

void destroi(Map *M){
	Map aux;
	while (*M != NULL){
		aux = *M;
		*M = aux->prox;
		free(aux);
	}
}
