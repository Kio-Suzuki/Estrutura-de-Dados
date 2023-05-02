#include <stdio.h>
#include <stdlib.h>
#define MAX 50

typedef struct pilha{
    int n;
    float vet[MAX];
}Pilha;

Pilha* cria()
{
    Pilha* p = (Pilha*)malloc(sizeof(Pilha));
    p->n = 0;
    return p;
}

void push (Pilha* p, float v)
{
    if (p->n == MAX) { /* capacidade esgotada */
        printf("Capacidade da pilha estourou.\n");
        exit(1); /* aborta programa */
    }
    /* insere elemento na próxima posição livre */
    p->vet[p->n] = v;
    p->n++;
}

int vazia(Pilha* p)
{
    return p->n == 0;
}

float pop(Pilha* p)
{
    float v;
    if(vazia(p)){
        printf("Pilha vazia\n");
        exit(1);
    }
    v = p->vet[p->n-1];
    p->n--;
    return v;
}

void imprimir(Pilha* p)
{
    for(int i = 0; i <= p->n-1; i++){
        printf("%.2f - ", p->vet[i]);
    }
}

int main()
{
    Pilha* p1;
    float ret;
    p1 = cria();
    push(p1, 1.5);
    push(p1, 3.0);
    push(p1, 3.6);
    ret = pop(p1);
    printf("Valor retirado: %.2f\n", ret);
    imprimir(p1);

    return 0;
}