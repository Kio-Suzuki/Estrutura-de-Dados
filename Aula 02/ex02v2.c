#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int *A, m, p, **B, n;

    srand(time(NULL));
    printf ("Linhas: ");
    scanf ("%d", &m);
    printf ("Colunas: ");
    scanf ("%d", &p);
    
    A = (int*)malloc(m*p*sizeof(int));
    
    for(int i = 0; i < m; i++){
        for(int j = 0; j < p; j++){
            A[i*p+j] = rand()%11;
            printf("[%.2d]", A[i*p*j]);
        }
        printf("\n");
    }

    B = (int*)malloc(p*n*sizeof(int));
    
    for(int i = 0; i < p; i++){
        for(int j = 0; j < n; j++){
            B[i*n+j] = rand()%11;
            printf("[%.2d]", B[i*n*j]);
        }
        printf("\n");
    }
}
