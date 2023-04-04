#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
    int info;
    struct lista* prox;
}Lista;

Lista* inserir(Lista* l, int x);
void imprime(Lista* l);

int main()
{
    Lista* l = NULL;
    l = inserir(l, 1);
    l = inserir(l, 2);
    l = inserir(l, 3);

    imprime(l);
}

Lista* inserir(Lista* l, int x)
{
    Lista* novo, *p = l;
    novo = (Lista*)malloc(sizeof(Lista));
    novo->info = x;
    if(l != NULL){
        novo->prox = l;
    }else{
        novo->prox = novo;
        return novo;
    }

    while(p->prox != l){
        p = p->prox;
    }
    p->prox = novo;

    return novo;
}

void imprime(Lista* l)
{
    Lista* p = l;
    if(p != NULL){
        do{
            printf("[%d] ->  ", p->info);
            p = p->prox;
        }while(p != l);
    }else{
        printf("Lista vazia\n");
    }
}
