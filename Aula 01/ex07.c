#include <stdio.h>

void troca(float *a, float *b);

int main()
{
    float x = 5.0, y = 10.0, *px, *py;
    px = &x;
    py = &y;

    troca(px, py);

    printf ("x = %.1f\n", x);
    printf ("y = %.1f\n", y);

    return 0;
}

void troca(float *a, float *b)
{
    float aux;
    aux = *a;
    *a = *b;
    *b = aux;
}


