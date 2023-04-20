#include<stdio.h>
#include<stdlib.h>

struct lista2{
	int info;
    struct lista2 *ant;
	struct lista2 *prox;
};
typedef struct lista2 Lista2;

Lista2* inicializa(){
	return NULL;
}

Lista2* inserirI(Lista2 *l, int v){
	Lista2 *novo;
	novo = (Lista2*)malloc(sizeof(Lista2));
	novo->info = v;
	novo->ant = NULL;
	novo->prox = l;	
	if(l != NULL)
		l-> ant = novo;
	return novo;	
}

void imprime_rec (Lista2* l)
{
	if (l == NULL)
		return;
	printf("%x - [%x | %d | %x] ->\n", l, l->ant, l->info, l->prox);
	imprime_rec(l->prox);
}

Lista2* inserirF(Lista2 *l, int v){
	Lista2 *novo, *p=l;
	novo = (Lista2*)malloc(sizeof(Lista2));
	novo->info = v;
	novo->prox = NULL;
	if(l == NULL){
		novo->ant = NULL;
		return novo;
	}
	else{
		while(p->prox != NULL)
			p = p->prox;
			
		p->prox = novo;
		novo->ant = p;
		return l;
	}
}

Lista2* buscar(Lista2 *l, int v){
	Lista2 *p = l;
	
	while(p != NULL && p->info != v)
		p = p->prox;
	
	if(p == NULL)
		return NULL;
	else
		return p;	
}

Lista2* excluir(Lista2 *l, int v){
	Lista2 *p, *aux;
	p = buscar(l,v);
	
	if(p == NULL){
		printf("\n\nO valor %d nao foi encontrado para exclusao!", v);
		return l;
	}
	else{
		if(p == l){
			if(p->prox != NULL){
				p->prox->ant = NULL;
				aux = p->prox;				
				return aux;
			}
			else{				
				return NULL;
			}
			free(p);					
		}
		else{
			p->ant->prox = p->prox;
			if(p->prox != NULL)
				p->prox->ant = p->ant;
			return l;
		}		
	}	
}

int main(){
	Lista2 *LD1, *b;
	LD1 = inicializa();

	LD1 = inserirF(LD1, 8);
	LD1 = inserirI(LD1, 7);
	LD1 = inserirI(LD1, 5);
	LD1 = inserirI(LD1, 3);
	LD1 = inserirI(LD1, 1);
	LD1 = inserirF(LD1, 9);

	imprime_rec(LD1);

	b = buscar(LD1, 5);
	printf("\nO numero %d esta no endereco de memoria %x.", b->info, b);
	
    LD1 = excluir(LD1, 7);
    
	printf("\n\nLista apos exclusao:\n\n");
	imprime_rec(LD1);
	
	return 0;
}

