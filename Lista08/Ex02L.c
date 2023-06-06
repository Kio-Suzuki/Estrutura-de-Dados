#include<stdio.h>
#include<stdlib.h>

typedef struct no{
	int info;
	struct no *prox;
}No;

typedef struct fila{
	No *ini;
	No *fim;
}Fila;

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

void FuraFila(Fila *f, int v){

}

