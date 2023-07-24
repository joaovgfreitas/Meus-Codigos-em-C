typedef struct no* Lista;

struct no{
	int item;
	Lista prox;
};

void criar(Lista* L);
int vazia(Lista L);
void inserir(Lista* L, int x);

void push(Lista *L, int y);

void mostrar(Lista L);
void remover(Lista* L, int n);
void pesquisar(Lista L, int x);

Lista separa(Lista L, int valor);
Lista concatena(Lista L1, Lista L2);
