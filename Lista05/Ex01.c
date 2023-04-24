#include <stdio.h>
#include <stdlib.h>
#include "listaCircular1.h"

int main(void)
{
    ListaC* l = NULL; 
    ListaC* l2 = NULL;
    
    int n, x;

    printf("Quantos elementos gostaria de adicionar a lista: ");
    scanf("%d", &n);      

    for(int i = 0; i < n; i++){
        printf ("Valor: ");
        scanf ("%d", &x);
        l = inserirI(l, x);
    }   
  
    printf("Lista:\n");
    imprimeLista(l);

    printf("\nQual numero deseja buscar: ");
    scanf("%d", &x);

    l2 = separa(l, x);
    
    printf("\n\nLista 1:\n");
    imprimeLista(l);
    
    printf("\n\nLista 2:\n");
    imprimeLista(l2);
    
    return 0;
}