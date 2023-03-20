#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int **A, m, p, **B, n, i, j, c = 1;

    srand(time(NULL));
    printf ("Linhas: ");
    scanf ("%d", &m);
    printf ("Colunas: ");
    scanf ("%d", &p);
    A = (int**)malloc(m*sizeof(int*));
    for(i = 0; i < m; i++){
        A[i] = malloc(p*sizeof(int));
    }
    
    printf ("\nMATRIZ A:\n");
    for(i = 0; i < m; i++){
        for (j = 0; j < p; j++){
            A[i][j] = c;
            printf ("[%.2d] ", A[i][j]);
            c++;
        }
        printf ("\n");
    }

    printf ("\nColunas: ");
    scanf ("%d", &n);
    B = (int**)malloc(p*sizeof(int*));
    for(i = 0; i < p; i++){
        B[i] = malloc(n*sizeof(int));
    }
    c = 1;
    printf ("\nMATRIZ B:\n");
    for(i = 0; i < p; i++){
        for (j = 0; j < n; j++){
            B[i][j] = c;
            printf ("[%.2d] ", B[i][j]);
            c++;
        }
        printf ("\n");
    }

    int **M;
    M = (int**)malloc(m*sizeof(int*));
    for(i = 0; i < m; i++){
        M[i] = malloc(n*sizeof(int));
    }

     for(i = 0; i < p; i++){
        for (j = 0; j < n; j++){
            for(int k = 1; k < (p-1); k++){
                M[i][j] = (A[i][k] * B[k][j]);
            }
        }
    }

    printf ("\nMATRIZ M: \n");
    for(i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            printf ("[%.2d] ", M[i][j]);
        }
        printf ("\n");
    }

    return 0;
}