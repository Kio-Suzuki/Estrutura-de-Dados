#include <stdio.h>

void mm(int v[], int *pmin, int *pmax);
    
int main()
{
    int v[5], min, max, *pmin, *pmax;
    pmin = &min;
    pmax = &max;
    for (int i = 0; i < 5; i++){
        printf ("Digite um valor: ");
        scanf ("%d", &v[i]);
    }
    min = v[0];
    max = v[0];

    mm(v, pmin, pmax);

    printf("Valor maximo = %d\n", *pmax);
    printf("Valor minimo = %d\n", *pmin);
}

void mm(int v[], int *pmin, int *pmax)
{
    for(int i = 0; i < 5; i++){
        if(v[i] > *pmax){
            *pmax = v[i];
        }else if(v[i] < *pmin){
            *pmin = v[i];
        }
    }
}




