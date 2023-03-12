#include <stdio.h>

void maximoMinimo(int *v, int N, int *maximo, int *minimo);

int main()
{
    int *v, N, max = 0, min = 0, *pmax, *pmin;
    pmax = &max;
    pmin = &min;
    printf ("Quantos numeros o vetor ira armazenar? ");
    scanf ("%d", &N);
    v = malloc(N * sizeof (int));
    for (int i = 0; i < N; i++){
        v[i] = i * 2;
    }

    for (int i = 0; i < N; i++){
        printf ("v[%d] = %d\n", i, v[i]);
    }

    maximoMinimo(&v, N, &max, &min);

    printf ("Valor maximo = %d\n", *pmax);
    printf ("Valor minimo = %d\n", *pmin);

    free(v);
    return 0;
}

void maximoMinimo(int *v, int N, int *maximo, int *minimo)
{
    for (int i = 0; i < N; i++){
        printf ("v[%d] = %d\n", i, *v[i]); v
        if(*v[i] > *maximo){
            *maximo = *v[i];
        }else if (*v[i] < *minimo){
            *minimo = *v[i];
        }
    }
    printf ("Valor maximo = %d\n", *maximo);
    printf ("Valor minimo = %d\n", *minimo);
}