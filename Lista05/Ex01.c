#include <stdio.h>
#include <stdlib.h>
#include "listaCircular1.h"

int main(void)
{
    ListaC* l = NULL; 
    ListaC* l2 = NULL;
    
    int n, x;

    l = inserirI(l, 3);
    l = inserirI(l, 17);
    l = inserirI(l, 5);
    l = inserirI(l, 12); 
    l = inserirI(l, 1);
  
    printf("Lista:\n");
    imprimeLista(l);

    l2 = separa(l, 3);
    
    printf("\n\nLista 1:\n");
    imprimeLista(l);
    
    printf("\n\nLista 2:\n");
    imprimeLista(l2);
    
    return 0;
}