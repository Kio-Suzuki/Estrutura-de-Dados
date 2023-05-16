#include <stdio.h>
#include <stdlib.h>
#include "pilhaVET.h"

int main()
{
    Pilha *p;
    p = cria();
    push(p, 1);
    push(p, 3);
    push(p, 5);
    printf("PILHA\n");
    imprime(p);
    inverter(p);
    printf("PILHA INVERTIDA\n");
    imprime(p);
    return 0;
}