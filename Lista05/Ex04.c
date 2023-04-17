#include <stdio.h>
#include <stdlib.h>
#include "listaCircular4.h"

int main()
{
    ListaC* l = NULL;
    int n;
    float x;

    printf("Quantos elementos gostaria de adicionar a lista: ");
    scanf("%d", &n);      

    for(int i = 0; i < n; i++){
        printf ("Valor: ");
        scanf ("%f", &x);
        l = inserirI(l, x);
    }     

    printf("\nLISTA:\n");
    imprimeLista(l);

    printf("\nQuantos elementos gostaria de remover da lista: ");
    scanf("%d", &n);

    l = retira_prefixo(l, n);

    printf("\nLISTA:\n");
    imprimeLista(l);

    return 0;
}