#include <stdio.h>
#include <time.h>

void maximoMinimo(int *v, int N, int *maximo, int *minimo);

int main()
{
    int *v, N, max, min, *pmax, *pmin;
    pmax = &max;
    pmin = &min;
    srand(time(NULL));
    printf ("Quantos numeros o vetor ira armazenar? ");
    scanf ("%d", &N);
    v = malloc(N * sizeof (int));
    for (int i = 0; i < N; i++){
        v[i] = rand()%101;
    }

    max = v[0];
    min = v[0];

    maximoMinimo(v, N, pmax, pmin);
    printf ("Valor maximo = %d\n", *pmax);
    printf ("Valor minimo = %d\n", *pmin);

    free(v);
    return 0;
}

void maximoMinimo(int *v, int N, int *maximo, int *minimo)
{
    for (int i = 0; i < N; i++){ 
        if(v[i] > *maximo){
            *maximo = v[i];
        }else if (v[i] < *minimo){
            *minimo = v[i];
        }
    }
   
}



