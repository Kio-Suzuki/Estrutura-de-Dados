typedef struct listaC{
    int info;
    struct listaC* prox;
}ListaC;

ListaC* inserirI(ListaC *l, int v){
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
			printf("[%d] -> ",p->info);
			p=p->prox;
		}while(p!=l);
	}else
		printf("\nLISTA VAZIA!!!");
}

ListaC* constroi(int n, int* v)
{
    ListaC* l = NULL;
    for(int i = n-1; i >= 0; i--){
        l = inserirI(l, v[i]);
    }
    return l;
}