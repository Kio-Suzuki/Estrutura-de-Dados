#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    float info;
    struct no* prox;
}No;

struct pilha{
    No* prim;
};

Pilha* cria(void)
{
    Pilha* p = (Pilha*)malloc(sizeof(Pilha));
    p->prim = NULL;
    return p;
}

No* ins_ini(No* l, float v)
{
    No* p = (No*)malloc(sizeof(No));
    p->info = v;
    p->prox = l;
    return p;
}

No* ret_ini(No* l)
{
    No* p = l->prox;
    free(l);
    return p;
}

void push(Pilha* p, float v)
{
    p->prim = ins_ini(p->prim,v);
}

float pop(Pilha* p)
{
    float v;
    inf(vazia(p)){
        printf("Pilh vazia.\n");
        exit(1);
    }
    v=p->prim->info;
    p->prim = ret_ini(p->prim);
    return v;
}

int vazia(Pilha* p)
{
    return (p->prim==NULL);
}

void libera(Pilha* _P_tmpdir{
    No* q = p->prim;
    while(q!=NULL){
        No* t = q->prox;
        free(q);
        q = t;
    }
    free(p);
})