#include <stdio.h>

typedef struct lista{
    int info;
    struct lista *prox;
}Lista;

Lista *inicializa();

Lista *inserirInicio(Lista *L, int v);
    
void imprimir(Lista *L);

int main()
{
    Lista *L1, *L2;
    L1 = inicializa();
    L2 = inicializa();

    L1 = inserirInicio(L1, 50);
    L1 = inserirInicio(L1, 40);
    L1 = inserirInicio(L1, 30);
    L1 = inserirInicio(L1, 20);
    L1 = inserirInicio(L1, 10);
   
    imprimir(L1);
    return 0;
}

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