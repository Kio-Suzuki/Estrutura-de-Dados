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