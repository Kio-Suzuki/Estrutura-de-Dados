typedef struct listaC{
    float info;
    struct listaC* prox;
}ListaC;

ListaC* inserirI(ListaC *l, float v){
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

void imprimeLista(ListaC *l){
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
    if (l1 == NULL) {
        return l2;
    }
    if (l2 == NULL) {
        return l1;
    }

    ListaC *novo, *p=l1;
	novo = (ListaC*)malloc(sizeof(ListaC));

	novo = l2;
	if(l1 != NULL){
		novo->prox = l1;
		while(p->prox!=l1){
			p = p->prox;			
		}
		p->prox = l2;
		return l1;
	}
	else{
		novo->prox = l2;
		return novo;
	}
}
