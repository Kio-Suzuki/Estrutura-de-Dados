#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int *A, m, p, **B, n, c = 1;

    srand(time(NULL));
    printf ("Linhas: ");
    scanf ("%d", &m);
    printf ("Colunas: ");
    scanf ("%d", &p);
    
    A = (int*)malloc(m*p*sizeof(int));
    
    for(int i = 0; i < m; i++){
        for(int j = 0; j < p; j++){
            A[i*p+j] = c;
            printf("[%.2d] ", A[i*p+j]);
            c++;
        }
        printf("\n");
    }

    printf ("\nColunas: ");
    scanf ("%d", &n);
    B = (int*)malloc(p*n*sizeof(int));
    c = 1;
    for(int i = 0; i < p; i++){
        for(int j = 0; j < n; j++){
            B[i*n+j] = c;
            printf("[%.2d] ", B[i*n+j]);
            c++;
        }
        printf("\n");
    }

    int *M;
    M = (int*)malloc(m*n*sizeof(int));
    printf ("\nMATRIZ M:\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            for(int k = 1; k < n; k++){
                M[i*n+j] = ((A[i*p+k])+(B[k*n+j]));
                printf ("[%.2d] ", M[i*n+j]);
            }
        }
        printf("\n");
    }

    return 0;
}
