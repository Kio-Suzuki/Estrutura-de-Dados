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
/*
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
		printf("\nLISTA ANT:\n");
		imprimeLista(ant);
        p = p->prox;
    }while(p != l && p->info != n);

	printf("\nLISTA ANT:\n");
	imprimeLista(ant);
	printf("\nLISTA P:\n");
	imprimeLista(p);
	printf("\nLISTA L:\n");
	imprimeLista(l);
    printf("\nLISTA L2:\n");
	imprimeLista(l);

    printf("\nINICIO DO IF\n");

    if(p == l) {
        if(p->info != n){
            printf("Valor nao encontrado.\n");
        }else{
			printf("ENTROU NO ELSE 1");
            ant = l;
            while(ant->prox != l){
                ant = ant->prox;
            }
            ant->prox = p->prox;
            l2 = p->prox;
            p->prox = l;
            printf("\nTESTE\n");
        }
    }else{
		printf("\nENTROU NO ELSE 2\n");
        l2 = p->prox;
        ant->prox = l2;
        p->prox = l;
    }

	printf("\nLISTA L:\n");
	imprimeLista(l);
    printf("\nLISTA L2:\n");
	imprimeLista(l2);

    return l2;
}
*/

ListaC* separa(ListaC* l, int n)
{
    while(l->info != n){
        l = l->prox;
    }
    
    l = l->prox;

    ListaC* l2 = NULL;
    l2 = l;    
    l->prox = NULL;

    return l2;
}