#include <stdio.h>
#include <stdlib.h>
#include "pilhaVET.h"

int main()
{
    Pilha *p1, *p2;
    int* f;
    p1 = cria();
    p2 = cria();
    push(p1, 1);
    push(p1, 3);
    push(p1, 5);
    printf("PILHA 1\n");
    imprime(p1);
    transferirElementos(p1, p2, f);
    printf("PILHA 2\n");
    imprime(p2);
    if(*f == 0){
        printf("\nTransferencia feita com sucesso!");
    }else{
        printf("\nErro ao transferir os elementos");
    }
    return 0;
}