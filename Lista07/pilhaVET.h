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

int vazia(Pilha* p)
{
    return (p->n == 0);
}

float pop(Pilha* p)
{
    float v;
    if(vazia(p)){
        printf("Pilha vazia.\n");
        exit(1);
    }
    v = p->vet[p->n-1];
    p->n--;
    return v;
}

void libera(Pilha* p)
{
    free(p);
}

void imprime (Pilha* p)
{
    int i;
    for (i=p->n-1; i>=0; i--)
        printf("%.2f\n",p->vet[i]);
}

int testaMaisElementos(Pilha* p1, Pilha* p2)
{
    int i, cont1 = 0, cont2 = 0;
    for (i = p1->n-1; i >= 0; i--)
        if(p1->vet[i] != 0)
            cont1++;
    for (i = p2->n-1; i >= 0; i--)
        if(p2->vet[i] != 0)
            cont2++;  
    if(cont1 > cont2){
        return 1;
    }else{
        return 0;
    }   
}

void transferirElementos(Pilha* p1, Pilha* p2, int* flagErro)
{
    for (int i = p1->n-1; i >= 0; i--){
        push(p2, p1->vet[i]);
    }
    inverter(p2);    
    if(!vazia(p2)){
        *flagErro = 0;
    }else{
        *flagErro = 1;
    }
}

void inverter(Pilha *p)
{
    Pilha* p2 = cria();
    while(!vazia(p)){
        push(p2, pop(p));
    }
    *p = *p2;
    libera(p2);
}

int iguais(Pilha* p1, Pilha* p2)
{

}