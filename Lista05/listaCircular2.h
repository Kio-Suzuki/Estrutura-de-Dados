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

ListaC* concatena(ListaC* l1, ListaC* l2){

	if(l1 = NULL){
		return l2;
	}
	if(l2 = NULL){
		return l1;
	}

	ListaC *p = l1;
	while(p->prox != l1){
		p = p->prox;
	}
	p->prox = l2;
	while(p->prox != l2){
		p = p->prox;
	}
	p->prox = l1;
	return l1;
}
