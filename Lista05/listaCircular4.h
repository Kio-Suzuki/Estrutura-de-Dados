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

ListaC* retira_prefixo(ListaC* l, int n)
{
    
	if(l == NULL){
		printf ("Lista vazia");
	}	

	ListaC *p = l;
	ListaC *ant = NULL;

	for(int i = 0; i < n; i++){
		ant = p;
		p = p->prox;
	}

	ant->prox = p->prox;
	free(p);
}
