#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
    int num;
    struct lista* prox;
}Lista;

Lista* iniciarlista(Lista* l, int p)
{
    Lista* l2 = (Lista*)malloc(sizeof(Lista));
    l2->num = p;
    l2->prox = l;
    return l2;
}

Lista* separa(Lista* l, int n)
{
    Lista* p = l;
    while(p->num == n){
        p = p->prox;
    }

    Lista* iniciarlista(p)


    if(p == NULL){
        return l;
    }
    if(ant == NULL){
        l = p->prox;
    }else{
        ant->prox = p->prox;
    }
    free(p);
    return l;

}