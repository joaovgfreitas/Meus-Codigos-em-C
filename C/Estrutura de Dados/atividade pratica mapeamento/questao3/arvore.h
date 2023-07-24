typedef int Item;

typedef struct arv* Arv;

struct arv{
	Arv esq;
	Item item;
	Arv dir;
	Arv cim;
};

Arv no(Arv A, Item x, Arv B, Arv C);
void emOrdem(Arv A);
void posOrdem(Arv A);
void preOrdem(Arv A);
void emNivel(Arv A);
void destroi(Arv *A);
void inserir(Item x, Arv *A);
int busca(Item x, Arv A);
Item removeMax(Arv *A);
void remover(Item x, Arv *A);
