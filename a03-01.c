#include <stdio.h>
#include <math.h>

int main()
{
    int n = 0;
    int a;
    int b;
    scanf("%d", &n); 
    do{
        a = 100 * sqrt(n);
        b = pow(2, n);
        n++;
    }while(a > b);
    printf("n = %d", n);
}