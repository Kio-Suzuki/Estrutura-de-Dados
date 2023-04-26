#include <stdio.h>
#include <stdlib.h>
#include "listadup.h"

int main()
{
    ListaDupF *l = NULL;
    int n;

    l = insereF(l, 1.5);
    l = insereF(l, 2.3);
    l = insereF(l, 4.5);
    l = insereF(l, 6.3);

    printf("\nLISTA:\n");
    imprimeF(l);
 
    printf("\nQuantos elementos gostaria de remover: ");
    scanf("%d", &n);

    l = retira_prefixo(l, n);

    printf("\nLISTA COM REMOCAO:\n");
    imprimeF(l);

    return 0;
}