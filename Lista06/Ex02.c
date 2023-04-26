#include <stdio.h>
#include <stdlib.h>
#include "listadup.h"

int main()
{
    ListaDupF *l1 = NULL, *l2 = NULL;
    
    l1 = insereF(l1, 1.5);
    l1 = insereF(l1, 2.3);
    
    l2 = insereF(l2, 4.5);
    l2 = insereF(l2, 6.3);
    
    printf("\nLISTA 1:\n");
    imprimeF(l1);

    printf("\nLISTA 2:\n");
    imprimeF(l2);

    l1 = concatena(l1, l2);
    printf("\nLISTA CONCATENADA:\n");
    imprimeF(l1);

    return 0;
}