#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "map.h"

int main() {
	Map nossoMap = NULL;

	inserir("Ana","Joao", &nossoMap);
	inserir("Xico", "Bia", &nossoMap);
	inserir("Jose","Maria", &nossoMap);
	inserir("Zefa", "Mairon", &nossoMap);
	exibe(nossoMap);
/*
	printf("\n\nENDERECOS\n\n");
	exibeEnd(nossoMap);
*/	

	
	if(remover("Xico",&nossoMap)){
		printf("Removido\n");
	}else{
		printf("Nuntaqui\n");
	}
	
	exibe(nossoMap);
	
	
	
	return 0;
}
