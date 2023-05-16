#include <stdio.h>
#include <stdlib.h>
#define MAX 50


typedef struct pilha{
    int n;
    float vet[MAX];
}Pilha;

Pilha* cria(void)
{
    Pilha* p = (Pilha*)malloc(sizeof(Pilha));
    p->n = 0;
    return p;
}

void push(Pilha* p, float v)
{
    if(p->n == MAX){
        printf("Capacidade da pilha estourou.\n");
        exit(1);
    }
    p->vet[p->n] = v;
    p->n++;
}

float pop(Pilha* p)
{
    float v;
    if(vazio(p)){
        printf("Pilha vazia.\n");
        exit(1);
    }
    v = p->vet[p->n-1];
    p->n--;
    return v;
}

int vazia(Pilha* p)
{
    return (p->n == 0);
}

void libera(Pilha* p)
{
    free(p);
}