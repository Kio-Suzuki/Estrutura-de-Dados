#include <stdio.h>

void trocaValor(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

int main()
{
    int x = 2, y = 3;
    trocaValor(&x, &y);
    printf ("x = %d\ny = %d\n", x, y);
    return 0;
}