#include<stdio.h>
#include<stdlib.h>

struct no{
	int info;
	struct no *prox;
};
typedef struct no No;

struct fila{
	No *ini;
	No *fim;
};
typedef struct fila Fila;

Fila* cria(){
	Fila *nova;
	nova = (Fila*)malloc(sizeof(Fila));
	nova->ini = NULL;
	nova->fim = NULL;
	return nova;
}

void insere(Fila *f, int v){
	No *novo;
	novo = (No*)malloc(sizeof(No));
	novo->info = v;
	novo->prox = NULL;
	
	if (f->fim!=NULL){	
		f->fim->prox = novo;
		f->fim = novo;
	}
	else{
		f->ini = novo;
		f->fim = novo;
	}	
}

void imprimir(Fila *f){
	No *aux = f->ini;
	while(aux!=NULL){
		printf("%d -> ", aux->info);
		aux = aux->prox;
	}	
}

int conta(Fila *f){
    int cont = 0;
	No *aux = f->ini;
	while(aux!=NULL){
		cont++;
		aux = aux->prox;
	}	
    return cont;
}

int vazia(Fila *f){
	return (f->ini == NULL);
}

Fila* eliminar(Fila *f){
	No *aux, *p;
	
	if(f!=NULL){
		aux=f->ini;
		while(aux!=NULL){
			p = aux;
			aux = aux->prox;
			free(p);		
		}
		free(f);
	}
	else
		printf("Nao existe a fila!");
		
	return NULL;
	
}

int main(){
	Fila *f1;
	f1 = cria();	

	insere(f1, 1);
	insere(f1, 2);
	insere(f1, 3);
	insere(f1, 4);

	imprimir(f1);

    printf("\nHa %d elementos na fila", conta(f1));
	
	f1 = eliminar(f1);
	
	return 0;
}