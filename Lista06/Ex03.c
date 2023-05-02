#include <stdio.h>
#include <stdlib.h>
#include "listadup.h"

int main()
{
    int *vet;
    int n;
    printf ("Quantidade de elementos: ");
    scanf ("%d", &n);

    vet = malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        printf ("Valor: ");
        scanf ("%d", &vet[i]);
    }

    printf("\nVETOR:\n");
    for(int i = 0; i < n; i++){
        printf ("[%d] ", vet[i]);
    }

    ListaDupI* l = NULL;

    l = constroi(n, vet);

    printf("\nLISTA:\n");
    imprimeI(l);

    return 0;
}