#include <stdio.h>
#include "listEnc.h"

int main() {
    Lista fila;
    criar(&fila);
    // 1 para Pessimo
    // 2 para Ruim
    // 3 para Regular
    inserir(&fila, "Pedro", 2);
    inserir(&fila, "Roberto", 3);
    inserir(&fila, "Lucas", 1);
    inserir(&fila, "Renata", 2);
    inserir(&fila, "Hugo", 1);
    mostrar(fila);
    remover(&fila);
    mostrar(fila);
    pesquisar(fila, "Felipe");
    return 0;
}
