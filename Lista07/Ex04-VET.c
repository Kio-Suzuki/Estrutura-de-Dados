#include <stdio.h>
#include <stdlib.h>

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
}