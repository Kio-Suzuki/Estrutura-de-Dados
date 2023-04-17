#include <stdio.h>
#include <stdlib.h>
#include "listaCircular1.h"

int main(void)
{
    ListaC* l = NULL;
    int n, x;

    printf("Quantos elementos gostaria de adicionar a lista: ");
    scanf("%d", &n);      

    for(int i = 0; i < n; i++){
        printf ("Valor: ");
        scanf ("%d", &x);
        l = inserirI(l, x);
    }   
  
    printf("Qual numero deseja buscar: ");
    scanf("%d", &x);

    ListaC* l2 = separa(l, x);
    
    printf("Lista 1:\n");
    imprimeLista(l);
    printf("\n\nLista 2:\n");
    imprimeLista(l2);
    
    return 0;
}