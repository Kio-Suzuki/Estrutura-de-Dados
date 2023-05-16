#include <stdio.h>
#include <stdlib.h>
#include "pilhaVET.h"

int main()
{
    Pilha *p1, *p2;
    int v;
    p1 = cria();
    p2 = cria();
    push(p1, 1);
    push(p1, 3);
    push(p1, 5);
    push(p2, 2);
    push(p2, 4);
    printf("PILHA 1\n");
    imprime(p1);
    printf("PILHA 2\n");
    imprime(p2);
    v = testaMaisElementos(p1, p2);
    if(v == 1){
        printf("Pilha 1 possui mais elementos");
    }else{
        printf("Pilha 2 possui mais elementos");
    }

    return 0;
}