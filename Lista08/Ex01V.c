#include<stdio.h>
#include<stdlib.h>

#define N 5

struct fila{
	int ini;
	int fim;
	int cont; 
	float vet[N];
};
typedef struct fila Fila;

Fila* cria(){
	Fila* f = (Fila*) malloc(sizeof(Fila));
	f->ini = 0;
	f->fim = 0;
	f->cont = 0; 
	return f;
}

int incr(int i){
	if (i == N-1)
		return 0;
	else
		return i+1;
}

void insere(Fila* f, float v){
	if(f!=NULL){	
		if(f->cont == N){ 
			printf("A capacidade da fila esgotou.\n");		
		}
		else{
			f->vet[f->fim] = v;	
			f->fim = incr(f->fim);
			f->cont++;
		}
	}	
	else
		printf("\nFila nao existe!");
}

void imprime(Fila* f){
	int cont, i;
	
	if(f!=NULL){
		i=f->ini;
	
		if(f->cont!=0){
			for (cont=0; cont<f->cont; cont++){ 
				printf("vet[%d] = %.1f - ",i, f->vet[i]); 
				i++;
				if (i == N) 
				    i=0;
			}
		}
		else
			printf("FILA VAZIA");
			
		printf("\n\n");
	}	
	else
		printf("\nFila nao existe!");
}

int vazia(Fila* f){
	return(f->cont == 0);
}

Fila* elimina(Fila *f){
	free(f);
	return NULL;
}

int main(){
	Fila *F1;
	F1 = cria();	
	
	insere(F1,1);
    insere(F1,2);
    insere(F1,3);
	
	imprime(F1);
    printf("Ha %d elementos na Fila", F1->cont);

	printf("\n");

	F1 = elimina(F1);
	
	return 0;
}

