#include <stdio.h>
#include <string.h>
int main(){
	int cpf, rg;
	float altura;
	char nome[30], endereco[30];
	printf("Digite seu nome: ");
	scanf("%s",nome);
	printf("Digite seu CPF: ");
	scanf("%i",&cpf);
	printf("Digite seu RG: ");
	scanf("%i",&rg);
	printf("Digite sua altura: ");
	scanf("%f",&altura);
	printf("Digite seu endereco: ");
	scanf("%s",endereco);
	printf("NOME: %s\n",nome);
	printf("CPF: %i\n",cpf);
	printf("RG: %i\n",rg);
	printf("ALTURA: %.2f\n",altura);
	printf("ENDERECO: %s\n",endereco);
	return 0;
}
