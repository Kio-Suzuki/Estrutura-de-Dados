#include <stdio.h>
#include <math.h>

int main()
{
    int n = 220, x1, x2, c = 1;

    do{
        x1 = 2*pow(n,2) + 2*n;
        x2 = 5*n + c;
        c++;
    }while(x2 < x1);
  
    printf("O menor valor que c tem que assumir para que o algoritmo 2 seja menos eficiente e %d", c-1);

    n = 300;

    x1 = 2*pow(300,2) + 2*300;
    x2 = 5*300 + 96139;
    

    printf("\nx1 = %d\nx2 = %d", x1, x2);

    return 0;
}
