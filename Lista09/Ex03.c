#include<stdio.h>
#include<stdlib.h>

struct arv{
	char info;
	struct arv *esq;
	struct arv *dir;
};
typedef struct arv Arv;

Arv* inicializa(){
	return NULL;
}

Arv* cria(char c, Arv* sae, Arv* sad){
	Arv* p=(Arv*)malloc(sizeof(Arv));
	p->info = c;
	p->esq = sae;
	p->dir = sad;
	return p;
}

int vazia(Arv *a){
	return a==NULL;
}

void imprimir(Arv *a){
	if(!vazia(a)){	
		printf("[%c] - ", a->info);
		imprimir(a->esq);			
		imprimir(a->dir);
	}
}

Arv* libera (Arv* a){
	if (!vazia(a)){
		libera(a->esq); 
		libera(a->dir); 
		free(a); 
	}
	return NULL;
}

int busca (Arv* a, char c){
	if (vazia(a))
		return 0; 
	else
		return a->info==c || busca(a->esq,c) || busca(a->dir,c);
}


int igual(Arv* a, Arv* b){
	if (vazia(a) && vazia(b))
		return 1; 
	else if (vazia(a) || vazia(b))
		return 0; 
	else
		return (a->info == b->info) && igual(a->esq, b->esq) && igual(a->dir, b->dir); 
}

int main(){
   
	Arv *a1;
	Arv* a = cria('a',
					cria('b',
					inicializa(),
					cria('d', inicializa(), inicializa())
					),
					cria('c',
					cria('e', inicializa(), inicializa()),
					cria('f', inicializa(), inicializa())
					)
				);
	imprimir(a);
	a->esq->esq = cria('x',
				cria('y',inicializa(),inicializa()),
				cria('z',inicializa(),inicializa())
				);
	printf("\n");
    printf("Arvore A:\n")
	imprimir(a);
	
    Arv* b = cria('a',
					cria('b',
					inicializa(),
					cria('d', inicializa(), inicializa())
					),
					cria('c',
					cria('e', inicializa(), inicializa()),
					cria('f', inicializa(), inicializa())
					)
				);
	
	int igualAB = igual(a, b);
	if (igualAB)
		printf("As arvores 'a' e 'b' sao iguais.\n");
	else
		printf("As arvores 'a' e 'b' sao diferentes.\n");
	
	libera(a);
	libera(b);
	
	
	return 0;
}
