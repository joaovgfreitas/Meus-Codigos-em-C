typedef char Chave[10];
typedef char Valor[30];
typedef struct no* Lista;

struct no{
	Chave chave;
	Valor valor;
	Lista prox;
};

void criar(Chave c, Valor v, Lista* L);
int vazia(Lista L);
void inserir(Chave c, Valor v, Lista* l);
void mostrar(Lista L);
void remover(Lista* L, Valor n);
void pesquisar(Lista L, Valor x);

Lista separa(Lista L, Valor valor);
Lista concatena(Lista L1, Lista L2);
