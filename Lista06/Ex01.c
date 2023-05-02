#include <stdio.h>
#include <stdlib.h>
#include "listadup.h"

int main()
{
    ListaDupI* l = NULL;

    l = insereI(l, 1);
    l = insereI(l, 2);  
    l = insereI(l, 3);  
    l = insereI(l, 4);   

    printf("LISTA:\n");
    imprimeI(l);


    ListaDupI* l2 = separa(l, 3);

    printf("\nLista 1:\n");
    imprimeI(l);
    printf("\nLista 2:\n");
    imprimeI(l2);

    return 0; 
}