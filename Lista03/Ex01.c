#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
    int numero;
    struct lista* prox;
}Lista;

Lista* insere(Lista* l, int i);
void imprime(Lista* l);
Lista* separa(Lista* l, int n);

int main(void)
{
    Lista* l = NULL;
    l = insere(l, 3);
    l = insere(l, 17);
    l = insere(l, 5);
    l = insere(l, 12);
    l = insere(l, 1);
    
    printf("Lista 1:\n");
    imprime(l);
    
    printf("\n\nLista 2:\n");

    Lista* l2 = separa(l, 5);
    imprime(l2);

    return 0;
}

Lista* insere(Lista* l, int i)
{
    Lista* novaLista = (Lista*)malloc(sizeof(Lista));
    novaLista->numero = i;
    novaLista->prox = l;
    return novaLista;
}

void imprime(Lista* l)
{
    Lista* p;
    for(p = l; p != NULL; p = p->prox){
        printf("%d ", p->numero);
    }
}

Lista* separa(Lista* l, int n)
{
    Lista* p = l;
    while(p->numero != n){
        p = p->prox;
    }
    p = p->prox;
    Lista* l2 = (Lista*)malloc(sizeof(Lista));
    l2->numero = p->numero;
    l2->prox = p->prox;

    return l2;
}
