#define MAX 10
typedef struct no* Lista;

struct no{
	int item;
	int topo;
	Lista prox;
};

struct pilha{
	int itens[MAX];
	int top;
};
typedef struct pilha Pilha;

void criar(Lista* L);
int vazia(Lista L);
void inserir(Lista* L, int x);
void insereinicio (Pilha* P, int ite);
void mostrar(Lista L);
void remover(Lista* L, int n);
void pesquisar(Lista L, int x);

Lista separa(Lista L, int valor);
Lista concatena(Lista L1, Lista L2);
