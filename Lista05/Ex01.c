#include <stdio.h>
#include <stdlib.h>
#include "listaCircular1.h"

int main(void)
{
    ListaC* l = NULL;

    l = inserirI(l, 3);
    l = inserirI(l, 17);
    l = inserirI(l, 5);
    l = inserirI(l, 12);
    l = inserirI(l, 1);
       
    int x;
    printf("Qual numero deseja buscar: ");
    scanf("%d", &x);

    ListaC* l2 = separa(l, x);
    
    printf("Lista 1:\n");
    imprimeLista(l);
    printf("\n\nLista 2:\n");
    imprimeLista(l2);
    
    return 0;
}