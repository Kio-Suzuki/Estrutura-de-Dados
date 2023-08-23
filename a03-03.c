#include <stdio.h>
#include <math.h>

int main()
{
    int n = 1, a, b, c, d, e = 1;
    
    do{
        n++;
        a = n*log2(n);
    }while(a < 1000000);
    printf("1 seg - n*log2(n) = %d\n", n-1);

    n = 1;

        do{
        n++;
        a = n*log2(n);
    }while(a < 60000000);
    printf("1 min - n*log2(n) = %d\n", n-1);

    n = 1;

    do{
        b = pow(n,2);
        n++;
    }while(b < 1000000);
    printf("1 seg - n2 = %d\n", n-1);

    n = 1;

    do{
        b = pow(n,2);
        n++;
    }while(b < 60000000);
    printf("1 min - n2 = %d\n", n-1);

    n = 1;

    do{
        c = pow(n,3);
        n++;
    }while(c < 1000000);
    printf("1 seg - n3 = %d\n", n-1);

    n = 1;

    do{
        c = pow(n,3);
        n++;
    }while(c < 60000000);
    printf("1 min - n3 = %d\n", n-1);

    n = 1;

    do{
        n++;
        d = pow(2,n);
    }while(d < 1000000);
    printf("1 seg - 2n = %d\n", n-1);
    printf("1 min - 2n = %d\n", (n-1)*60);

    n = 1;

    do{
        n++;
        d = pow(2,n);
    }while(d < 60000000);
    printf("1 min - 2n = %d\n", n-1);

    n = 1;

    do{
        n++;
        e = e * n;
    }while(e < 1000000);
    printf("1 seg - n! = %d\n", n-1);

    n = 1;
    e = 1;

    do{
        n++;
        e = e * n;
    }while(e < 60000000);
    printf("1 min - n! = %d", n-1);

    return 0;
}