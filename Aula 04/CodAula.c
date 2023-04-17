#include<stdio.h>
#include<stdlib.h>

struct listaC{
	int info;
	struct listaC *prox;
};
typedef struct listaC ListaC;

ListaC* inicializa(){
	return NULL;
}

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
	
	while(p->prox!=l)
		p = p->prox;
	
	p->prox = novo;
		
	return novo;	
}

void imprimir(ListaC *l){
	ListaC *p=l;
	if(p!=NULL){
		do{
			printf("[%d] -> ",p->info);
			p=p->prox;
		}while(p!=l);
	}
	else
		printf("\nLISTA VAZIA!!!");
}

ListaC* inserirF(ListaC *l, int v){
	ListaC *novo, *p=l;
	novo = (ListaC*)malloc(sizeof(ListaC));
	novo->info = v;
	if(l!=NULL){
		novo->prox = l;
		while(p->prox!=l){
			p = p->prox;			
		}
		p->prox = novo;
		return l;
	}
	else{
		novo->prox = novo;
		return novo;
	}
}

ListaC* excluir(ListaC *l, int v){
	ListaC *ant=NULL, *p=l, *px, *aux=l;
	
	if(p!=NULL){
		do{
			ant = p;
			p = p->prox;
		}while(p!=l && p->info!=v); 
		
		if(p==l){
			//primeiro elemento, para excluir devemos procurar o �ltimo elemento e depois retornar p->prox
			px = p->prox;
			if(px==l){
				free(px);
				return NULL;
			}
			else{
				while(aux->prox!=l){
					aux = aux->prox;
				}
				aux->prox = p->prox;
				free(p);
				return aux->prox;
			}			
		}
		else{
			//elemento do meio
			ant->prox = p->prox;
			free(p);
			return l;
		}
	}
	else{
		printf("\n\nLista Vazia, nao e possivel excluir!!");
	}
}

ListaC* eliminar(ListaC *l){
	ListaC *aux, *p=l;
	
	if(p!=NULL){
		do{
			aux = p;
			p = p->prox;
			free(aux);
		}while(p!=l);		
	}
	else{
		printf("\n\nNao e possivel eliminar, lista vazia!!!");
	}	
	return NULL;
}

int main(){
	ListaC *L1, *L2;
	int i, n;
	
	L1 = inicializa();
	L2 = inicializa();
	
	for(i=3; i>=1; i--){
		printf("Entre com valor na posicao %d da lista: ", i);
		scanf("%d", &n);
		L1 = inserirI(L1, n);
	}	
	
	L1 = inserirF(L1,9);
	imprimir(L1);
	
	printf("\n\n");
	L1 = excluir(L1,1);
	
	imprimir(L1);
	
	L2 = eliminar(L2);
	
	printf("\n\n");
	
	imprimir(L2);
	
	return 0;
}