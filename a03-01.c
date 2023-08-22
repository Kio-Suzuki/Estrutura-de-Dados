#include <stdio.h>
#include <math.h>

int main()
{
    int n = 1, a, b;
    do{
        a = 100*pow(n,2);
        b = pow(2, n);
        n++;
    }while(a > b);
    printf("O menor valor de n para que o algoritmo 1 funcione mais rapido: n = %d", n-1);
    return 0;
}