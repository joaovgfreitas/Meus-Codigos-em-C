#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 3
struct aluno{
    char nome[81];
    float nota;
	};
typedef struct aluno Aluno;

int compara (const void* s1, const void* s2){
	Aluno* a1 = (Aluno*)s1;
	Aluno* a2 = (Aluno*)s2;
	return strcmp(a1->nome, a2->nome);}
	
int main(){
	int i;
	Aluno vet[MAX];
	char a[30];
	Aluno* busca;
	for (i=0; i<MAX; i++){
		printf("Digite o nome e nota do aluno: \n");
		scanf("%s %f", &vet[i].nome, &vet[i].nota);}
	qsort (vet, MAX, sizeof(Aluno), compara);
	printf("Nomes e notas ordenados: \n");
	for (i=0; i<MAX; i++)
		printf("%0.2f \t %s\n",vet[i].nota, vet[i].nome);
	printf("\nInforme o nome a ser pesquisado: ");
	scanf("%s", a);
	busca = (Aluno*)bsearch(a, vet, MAX, sizeof(Aluno), compara);
	if (busca == NULL){
		printf("\nNome nao encontrado");}
	else {
		int posicao = busca - vet;
		printf("\nNome encontrado na posicao %d ",posicao+1);
		printf("\n%s ",vet[posicao].nome);}	
	return 0;
}
