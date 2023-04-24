typedef struct listaC{
    int info;
    struct listaC* prox;
}ListaC;

ListaC* inserirI(ListaC *l, int v) 
{
    ListaC* novo;
    novo = (ListaC*) malloc(sizeof(ListaC));
    
	novo->info = v;
    novo->prox = NULL;

    if(l == NULL){
        novo->prox = novo;
        l = novo;
    }else{
        ListaC *p = l;
        while (p->prox != l){
            p = p->prox;
        }
        p->prox = novo;
        novo->prox = l;
    }
    return l;
}

void imprimeLista(ListaC *l)
{
	if(l == NULL){
		printf("\nLista vazia\n");
        
	}
    
	ListaC* p = l;
	do{
		printf("[%d] -> ", p->info);
		p = p->prox;
	}while(p != l);
}

ListaC *separa (ListaC* l, int n)
{
	ListaC *p = l;
    ListaC *l2 = NULL;
    ListaC *ant = NULL;

    if (l == NULL) {
        printf("Lista vazia.\n");
        return l;
    }

    do{
        ant = p;
        p = p->prox;
    }while(p != l && p->info != n);

    if(p == l) {
        if(p->info != n){
            printf("Valor nao encontrado.\n");
        }else{
            ant = l;
            while(ant->prox != l){
                ant = ant->prox;
            }
            ant->prox = p->prox;
            l2 = p->prox;
            p->prox = l;
        }
    }else{
        l2 = p->prox;
        ant->prox = l2;
        p->prox = l;
    }

    return l2;
}