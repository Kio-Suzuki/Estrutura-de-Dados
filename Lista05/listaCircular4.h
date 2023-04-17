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
    int cont = 0;

    if(l->prox == NULL)
        printf("Lista vazia");
    
    do{
        ListaC* temp = l;
        l = temp->prox;
        cont++;
    }while(cont < n);

    return l;
}