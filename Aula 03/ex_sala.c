#include <stdio.h>

typedef struct lista{
    int info;
    struct lista *prox;
}Lista;

Lista *inicializa(){
    return NULL;
}

Lista *inserirInicio(Lista *L, int v){
    Lista *novo;
    novo = (Lista*)malloc(sizeof(Lista));
    novo->info = v;
    novo->prox = L;
    return novo;
}

void imprimir(Lista *L){
    while(L != NULL){
        printf("%x - [%d | %x] ->\n", L, L->info, L->prox);
        L = L->prox;
    }
}

int main()
{
    Lista *L1, *L2;
    L1 = inicializa();
    L2 = inicializa();

    L1 = inserirInicio(L1, 12);
    L1 = inserirInicio(L1, 10);
    L1 = inserirInicio(L1, 8);
    L1 = inserirInicio(L1, 8);
    L1 = inserirInicio(L1, 4);
   
    imprimir(L1);
    return 0;
}   