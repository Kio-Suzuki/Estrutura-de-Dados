#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
    int info;
    struct lista* prox;
}Lista;

Lista* inicializada(void);
Lista* insere(Lista* l, int i);
void imprime(Lista* l);
int vazia(Lista* l);
Lista* retira(Lista* l, int v);
void libera(Lista* l);
Lista* busca(Lista* l, int v);

int main(void)
{
    Lista* l;
    l = inicializada();
    l = insere(l, 23);
    l = insere(l, 45);
    l = insere(l, 56);
    l = insere(l, 78);
    imprime(l);
    l = retira(l, 78);
    imprime(l);
    l = retira(l, 45);
    imprime(l);
    busca(l, 78);
    libera(l);
    return 0;
}

Lista* inicializada(void)
{
    return NULL;
}

Lista* insere(Lista* l, int i)
{
    Lista* novo = (Lista*)malloc(sizeof(Lista));
    novo->info = i;
    novo->prox = l;
    return novo;
}

void imprime(Lista* l)
{
    Lista* p;
    for(p = l; p != NULL; p = p->prox){
        printf("info = %d\n", p->info);
    }
}

int vazia(Lista* l)
{
    if(l == NULL){
        return 1;
    }else{
        return 0;
    }
}

Lista* retira(Lista* l, int v)
{
    Lista* ant = NULL;
    Lista* p = l;
    while(p != NULL && p->info != v){
        ant = p;
        p = p->prox;
    }
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

void libera(Lista* l)
{
    Lista* p = l;
    while(p != NULL){
        Lista* t = p->prox;
        free(p);
        p = t;
    }
}

Lista* busca(Lista* l, int v){
    Lista* p;
    for(p = l; p != NULL; p = p->prox){
        if(p->info == v){
            return p;
        }
    }
    return NULL;
}