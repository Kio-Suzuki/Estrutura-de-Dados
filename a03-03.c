#include <stdio.h>
#include <math.h>

int main()
{
    int n = 1, a, b, c, d = 1;
    
    do{
        n++;
        c = n*log(n);
    }while(c < 1000000);
    printf("n*log(2) = %d\n", n-1);

    n = 1;

    do{
        a = pow(n,2);
        n++;
    }while(a < 1000000);
    printf("1 seg - n2 = %d\n", n-1);
    printf("1 min - n2 = %d\n", (n-1)*60);

    n = 1;

    do{
        b = pow(n,3);
        n++;
    }while(b < 1000000);
    printf("1 seg - n3 = %d\n", n-1);
    printf("1 min - n3 = %d\n", (n-1)*60);

    n = 1;

    do{
        n++;
        b = pow(2,n);
    }while(b < 1000000);
    printf("1 seg - 2n = %d\n", n-1);
    printf("1 min - 2n = %d\n", (n-1)*60);

    n = 1;

    do{
        n++;
        d = d * n;
    }while(d < 1000000);
    printf("1 seg - n! = %d\n", n-1);
    printf("1 min - n! = %d", (n-1)*60);

    return 0;
}