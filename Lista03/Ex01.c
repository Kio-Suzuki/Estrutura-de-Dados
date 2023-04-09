#include <stdio.h>
#include <stdlib.h>
#include "listaEncadeada.h"

int main(void)
{
    Lista* l = NULL;

    l = insere(l, 3);
    l = insere(l, 17);
    l = insere(l, 5);
    l = insere(l, 12);
    l = insere(l, 1);
       
    int x;
    printf("Qual numero deseja buscar: ");
    scanf("%d", &x);

    Lista* l2 = separa(l, x);
    
    printf("Lista 1:\n");
    imprimeLista(l);
    printf("\n\nLista 2:\n");
    imprimeLista(l2);
    
    return 0;
}



