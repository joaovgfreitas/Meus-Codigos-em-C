#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 3
struct aluno{
    char nome[81];
    float nota;
	};
typedef struct aluno Aluno;

int compara(const void* p1, const void* p2){
	Aluno* a1 = (Aluno*)p1;
	Aluno* a2 = (Aluno*)p2;
	if (a1->nota > a2->nota) return -1;
	else if (a1->nota < a2->nota) return 1;
	else return strcmp(a1->nome, a2->nome);}
	
int main(){
	int i;
	Aluno vet[MAX];
	for (i=0; i<MAX; i++){
		printf("Digite o nome e nota do aluno: \n");
		scanf("%s %f", &vet[i].nome, &vet[i].nota);}
	qsort (vet, MAX, sizeof(Aluno), compara);
	printf("Nomes e notas ordenados: \n");
	for (i=0; i<MAX; i++)
		printf("%0.2f \t %s\n",vet[i].nota, vet[i].nome);	
	return 0;
}
