typedef struct listaC{
    float info;
    struct listaC* prox;
}ListaC;

ListaC* inserir(ListaC *l, float v){
	ListaC *novo, *p=l;
	novo = (ListaC*)malloc(sizeof(ListaC));
	novo->info = v;
	if(l!=NULL)
		novo->prox = l;
	else{
		novo->prox = novo;
		return novo;
	}
	
	while(p->prox != l)
		p = p->prox;
	
	p->prox = novo;
		
	return novo;	
}

void imprimeLista(ListaC *l)
{
	ListaC *p=l;
	if(p!=NULL){
		do{
			printf("[%.2f] -> ",p->info);
			p=p->prox;
		}while(p!=l);
	}else
		printf("\nLISTA VAZIA!!!");
}

ListaC* concatena(ListaC* l1, ListaC* l2)
{
	ListaC *c = l2;
    ListaC *p = l1;
    
    do{
        c = p;
        p = p->prox;
    }while (p != l1);

    c->prox = l2;
    p = l2;
    do{
        c = p;
        p = p->prox;
    }while(p != l2);
    c->prox = l1;

    return l1;
}

