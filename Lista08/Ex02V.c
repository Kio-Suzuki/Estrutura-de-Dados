#include<stdio.h>
#include<stdlib.h>

#define MAX 5

typedef struct fila{
	int ini;
	int fim;
	int vet[MAX];
}Fila;

Fila* cria() {
	Fila* f = (Fila*) malloc(sizeof(Fila));
	f->ini = 0;
	f->fim = 0;
	return f;
}

void insere(Fila *f, int x) {
    if (f->fim+1 == f->ini || (f->fim+1 == MAX && f->ini != 0)) {
        printf ("Fila cheia!");
        return;
    }
    f->vet[f->fim] = x;	;
    f->fim++;

    if (f->fim == MAX && f->ini != 0) {
        f->fim = 0;
    }
}

void retira(Fila*f) {
    if (f->ini == f->fim) {
        printf("Fila vazia!");
    }
    f->ini++;
}

void furaFila(Fila *f, int x) {
    if (f->fim == MAX) {
        if(f->ini == 0) {
            printf("FILA CHEIA!");
        } else {
            f->vet[f->ini-1] = x;
            f->ini--;    
        }
    }    
}

void imprime(Fila* f) {
    if (f->ini == f->fim) {
        printf ("Fila vazia!");
    }else{
        for(int i = f->ini; i < f->fim; i++){
            printf("%d -> ", f->vet[i]);
        }
    }
}

int main(){
	Fila *f;
	f = cria();	
	
	insere(f,1);
    insere(f,2);
    insere(f,3);
    insere(f,4);
    insere(f,5);

    printf("\nFILA:\n");
    imprime(f);

    retira(f);
    retira(f);
    
    printf("\nFILA APOS RETIRAR DOIS ELEMENTOS:\n");
    imprime(f);
    
    printf("\nUTILIZANDO A FUNCAO FURAFILA:\n");
    furaFila(f, 1);
    imprime(f);
	
	return 0;
}