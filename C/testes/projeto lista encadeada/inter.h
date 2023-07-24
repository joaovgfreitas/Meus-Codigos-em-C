//INTERFACE
#define fmt "%d "
typedef int Item;
typedef struct no {
	Item item;
	struct no *prox;
} *Lista;


void exibe(Lista L);
