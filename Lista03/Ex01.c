#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
    int numero;
    struct lista* prox;
}Lista;

Lista* insere(Lista* l, int i);
void imprime(Lista* l);
Lista* separa(Lista* l, int n);
void somaLista(Lista* l);
Lista* apaga(Lista* l, int n);

int main(void)
{
    Lista* l = NULL;
    l = insere(l, 3);
    l = insere(l, 17);
    l = insere(l, 5);
    l = insere(l, 12);
    l = insere(l, 1);
       
    int x;
    printf("Qual numero deseja buscar: ");
    scanf("%d", &x);


    //somaLista(l);

    Lista* l2 = separa(l, x);
    
    //apaga(l, x);
    printf("Lista 1:\n");
    imprime(l);
    printf("\n\nLista 2:\n");
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
    
    Lista* l2 = p;
   
    return l2;
}

void somaLista(Lista* l)
{
    Lista* p;
    int cont = 0;
    for(p = l; p != NULL; p = p->prox){
        cont += p->numero;
    }
    printf ("SOMA: %d", cont);
}

Lista* apaga(Lista* l, int n)
{
    Lista* p = l;
    while(p->numero != NULL){
        Lista* t = p->prox;
        p = p->prox;
    }
    p = p->prox;
    free(p);
}
