#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

Arv no(Arv A, Item x, Arv B, Arv C){
	Arv novo = malloc(sizeof(struct arv));
	novo->esq = A;
	novo->item = x;
	novo->dir = B;
	novo->cim = C;
	return novo;
}

void emOrdem(Arv A){
	if(A != NULL){
		emOrdem(A->esq);
		printf("%d ", A->item);
		emOrdem(A->dir);
	}	
}

void preOrdem(Arv A){
	if(A != NULL){
		printf("%d ", A->item);
		preOrdem(A->esq);
		preOrdem(A->dir);
	}
}


void posOrdem(Arv A){
	if(A != NULL){
		posOrdem(A->esq);
		posOrdem(A->dir);
		printf("%d ", A->item);	
	}	
}

void emNivel(Arv A){
	if (A != NULL){
		emNivel(A->cim);
		printf("%d ", A->item);
		emNivel(A->esq);
		emNivel(A->dir);
	}
}

void destroi(Arv *A){
	if(*A != NULL){
		destroi(&(*A)->esq);
		destroi(&(*A)->dir);
		destroi(&(*A)->cim);
		free(*A);
		*A = NULL;
	}
}

void inserir(Item x, Arv *A){
	if(*A == NULL){
		*A = no(NULL, x, NULL, NULL);
	}else{
		if(x < (*A)->item){
			inserir(x, &(*A)->esq);
		}else if (x > (*A)->item){
			inserir(x, &(*A)->dir);
		}else {
			inserir(x, &(*A)->cim);
		}
	}
}

int busca(Item x, Arv A){
	if(A == NULL){
		return 0;
	} 
	
	if( x == A->item){
		return 1;
	} 
	
	if( x < A->item){
		return busca(x, A->esq);
	}else if (x > A->item){
		return busca(x, A->dir);
	}else{
		return busca(x, A->cim);
	}
}

Item removeMax(Arv *A){
	if(*A == NULL){
		abort();
	}
	while( (*A)->dir != NULL){
		A = &(*A)->dir;
	}
	Arv aux = *A;
	Item x = aux->item;
	*A = aux->esq;
	free(aux);
	return x;	
}

void remover(Item x, Arv *A){
	if( *A == NULL){
		printf("\nChave %d nao se encontra na arvore!\n", x);
		return;
	}
	if( x == (*A)->item){
		Arv aux = *A;
		if( aux->esq == NULL){
			*A = aux->dir;
		}else{
			if( aux->dir == NULL){
				*A = aux->esq;
			}else{
				aux->item = removeMax(&aux->esq);
			}
			if( aux != *A){
				free(aux);
			}
		}
	}else{
		if ( x < (*A)->item){
			remover(x,&(*A)->esq);
		}else if (x > (*A)->item){
			remover(x,&(*A)->dir);
		}else {
			remover(x,&(*A)->cim);
		}
	} 
}
