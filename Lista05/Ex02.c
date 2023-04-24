#include <stdio.h>
#include <stdlib.h>
#include "listaCircular2.h"

int main(void)
{
    ListaC* l1 = NULL;
    ListaC* l2 = NULL;
	int n;
	float x;

    printf("Quantos numeros deseja inserir na lista 1?\n");
	scanf ("%d", &n);

	for(int i = 0; i < n; i++){
		printf ("Valor: ");
		scanf ("%f", &x);
		l1 = inserirI(l1, x);
	}

	printf("Quantos numeros deseja inserir na lista 2?\n");
	scanf ("%d", &n);

	for(int i = 0; i < n; i++){
		printf ("Valor: ");
		scanf ("%f", &x);
		l2 = inserirI(l2, x);
	}

	printf("Lista 1:\n");
	imprimeLista(l1);
	printf("\nLista 2:\n");
	imprimeLista(l2);

	l1 = concatena(l1, l2);

	printf("\nLista Concatenada:\n");
	imprimeLista(l1);

	return 0;
}