typedef struct no* Lista;

struct no{
	int item;
	Lista prox;
};

void criar(Lista* L);
int vazia(Lista L);
void inserir(Lista* L, int x);
void mostrar(Lista L);
void remover(Lista* L, int n);
void pesquisar(Lista L, int x);

void insereComeco(Lista* L, int x);
void insereFinal(Lista* L, int x);
void removeComeco(Lista* L);
void removeFinal(Lista *L);

Lista separa(Lista L, int valor);
Lista concatena(Lista L1, Lista L2);
