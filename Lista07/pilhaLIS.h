typedef struct no{
    float info;
    struct no* prox;
}No;

typedef struct pilha{
    No* prim;
}Pilha;

Pilha* cria(void)
{
    Pilha* p = (Pilha*)malloc(sizeof(Pilha));
    p->prim = NULL;
    return p;
}

void push(Pilha* p, float v)
{
    No* np = (No*)malloc(sizeof(No));
    np->info = v;
    np->prox = p->prim;
    p->prim = np;
}

float pop(Pilha* p)
{
    No* aux;
    float v;
    if(p->prim == NULL){
        printf("Pilh vazia.\n");
        exit(1);
    }else{
        aux = p->prim->prox;
        v = p->prim->info;
        free(p->prim);
        p->prim = aux;
        return v;
    }
}

int vazia(Pilha* p)
{
    return (p->prim==NULL);
}

void libera(Pilha* p){
    No* q = p->prim;
    while(q!=NULL){
        No* t = q->prox;
        free(q);
        q = t;
    }
    free(p);
}

void imprime (Pilha* p)
{
    No *aux;
	if(p==NULL){
		printf("\nNao existe pilha!!!\n");
		exit(1);
	}else{
		aux = p->prim;
		while(aux!=NULL){
			printf("%.2f\n",aux->info);
			aux = aux->prox;
		}
	}
}