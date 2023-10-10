#include <stdio.h>
#include <math.h>

int main()
{
    int n = 1, x1, x2;

    do{
        x1 = 2*pow(n,2) + 5*n;  
        x2 = 500*n + 4000;  
        n++;
    }while(x2 > x1);
    printf("A partir do valor %d o algoritmo 2 passa a ser melhor que o algoritmo 1", n-1);

    return 0;
}
