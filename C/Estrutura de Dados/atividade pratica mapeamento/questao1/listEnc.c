#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listEnc.h"

void criar(Chave c, Valor v, Lista* L){
	Lista novo = (Lista)malloc(sizeof(struct no));
	strcpy(novo->chave, c);
	strcpy(novo->valor, v);
	novo->prox = L;
	return novo;
	printf("Lista inicializada\n");
}

int vazia(Lista L){
	if(L == NULL){
		return 1;
	}else{
		return 0;
	}
}

void inserir(Chave c, Valor v, Lista *l){
	while(*l != NULL && strcmp((*l)->chave, c) == -1){
		l = &(*l)->prox;}
	if (*l != NULL && strcmp ((*l)->chave, c) == 0){
		strcpy ((*l)->valor, v);
	}else {
		*l = criar(c,v,*l);
	}
	printf("%d foi inserido na lista\n", L);
}

void mostrar(Lista L){
	printf("[ ");
	while(L != NULL){
		printf("%d ", L->item);
		L = L->prox;
	}
	printf("]\n");
}

//REMOÇÃO
void remover(Lista* L, int n){
	if(vazia(*L)){
        printf("Impossivel remover: lista vazia!\n");
    }else{
        if((*L)->item == n){
            *L = (*L)->prox;
            printf("Item removido: %d\n",n);
        }else{
            Lista ant, aux;
            aux = *L;
            while(aux->prox != NULL && aux->item != n){
                ant = aux;
                aux = aux->prox;
            }
            if(aux->item == n){
                ant->prox = aux->prox;
                aux->prox = NULL;
                free(aux);
                printf("Item removido: %d\n",n);
            }else{
                printf("Item %d nao consta na lista\n",n);
            }
        }
    }
}

//PESQUISA
void pesquisar(Lista L, int x){
	if(vazia(L)){
		printf("Lista vazia. Elemento nao encontrado!\n");
	}else{
		int achou = 0, p = 0;
		while(L != NULL && achou == 0){
			if(L->item == x){
				achou = 1;
			}
			p++;
			L = L->prox;
		}
		if(achou){
			printf("%d se encontra na %d%c posicao da lista!\n", x, p, 166);
		}else{
			printf("%d nao se encontra na lista!\n", x);
		}
	}
}
