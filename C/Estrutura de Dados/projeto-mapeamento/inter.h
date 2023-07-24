//INTERFACE
typedef int Chave;
typedef char Valor[30];
typedef struct map* Map;
struct map{
	Chave chave;
	Valor valor;
	Map prox;
};

Map no_map(Chave c, Valor v, Map p);
void inserir(Chave c, Valor v, Map *M);
int remover (Chave c, Map *M);
int pertence(Chave c, Valor v, Map M);
void listar (Map M);
void destroi(Map *M);
