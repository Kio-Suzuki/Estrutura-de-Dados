#include <stdio.h>
#include <math.h>

int main()
{
    int n = 1;
    int a;
    int b;
    scanf("%d", &n); 
    do{
        n++;
        a = 100 * sqrt(n);
        b = pow(2, n);
    }while(a > b);
    printf("n = %d", n);
}