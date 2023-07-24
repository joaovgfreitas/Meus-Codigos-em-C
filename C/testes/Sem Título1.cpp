#include <stdio.h>
#include <string.h>
int main(){
	char nome[50], endereco[50], cidade[50], nomepai[50], nomemae[50];
	int cpf, rg, idade;	
	float peso, renda;
	printf("Digite seu nome: ");
	scanf("%s",nome);
	printf("Digite seu endereco: ");
	scanf("%s",endereco);
	printf("Digite sua cidade: ");
	scanf("%s",cidade);
	printf("Digite seu cpf: ");
	scanf("%i",&cpf);
	printf("Digite seu rg: ");
	scanf("%i",&rg);
	printf("Digite sua idade: ");
	scanf("%i",&idade);
	printf("Digite o nome do seu pai: ");
	scanf("%s",nomepai);
	printf("Digite seu peso: ");
	scanf("%f",&peso);
	printf("Digite sua renda bruta: ");
	scanf("%f",&renda);
	printf("NOME: %s",nome);
	printf("\nENDERECO: %s",endereco);
	printf("\nCIDADE: %s",cidade);
	printf("\nCPF: %i",cpf);
	printf("\nRG: %i",rg);
	printf("\nIDADE: %i",idade);
	printf("\nNOME PAI: %s",nomepai);
	printf("\nNOME MAE: %s",nomemae);
	printf("\nPESO: %.2f",peso);
	printf("\nRENDA: %.2f",renda);
	return 0;
}
