#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int **A, m, p, **B, n;

    srand(time(NULL));
    printf ("Linhas: ");
    scanf ("%d", &m);
    printf ("Colunas: ");
    scanf ("%d", &p);
    A = (int**)malloc(m*sizeof(int*));
    for(int i = 0; i < m; i++){
        A[i] = malloc(p*sizeof(int));
    }
    int c = 1;
    printf ("\nMATRIZ A:\n");
    for(int i = 0; i < m; i++){
        for (int j = 0; j < p; j++){
            A[i][j] = c;
            printf ("[%.2d] ", A[i][j]);
            c++;
        }
        printf ("\n");
    }

    printf ("\nColunas: ");
    scanf ("%d", &n);
    B = (int**)malloc(p*sizeof(int*));
    for(int i = 0; i < p; i++){
        B[i] = malloc(n*sizeof(int));
    }
    c = 1;
    printf ("\nMATRIZ B:\n");
    for(int i = 0; i < p; i++){
        for (int j = 0; j < n; j++){
            B[i][j] = c;
            printf ("[%.2d] ", B[i][j]);
            c++;
        }
        printf ("\n");
    }

    int **M;
    M = (int**)malloc(m*sizeof(int*));
    for(int i = 0; i < m; i++){
        M[i] = malloc(n*sizeof(int));
    }
    
    for(int i = 0; i < p; i++){
        for (int j = 0; j < n; j++){
            M[i][j] = (A[i][1]*B[1][j]); 
        }
    }

    printf ("\nMATRIZ M: \n");
    for(int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf ("[%.2d] ", M[i][j]);
        }
        printf ("\n");
    }

    return 0;
}