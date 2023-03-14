#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vet, n, nn;
    printf ("Qual o tamanho do vetor? ");
    scanf ("%d", &n);
    vet = (int*) malloc(sizeof(int)*n);

    // novo tamanho

    nn = 15;
    realloc(vet, nn);

    for(int i = 0; i < n; i++)
        vet[i] = i + 1;

    return 0;
}
