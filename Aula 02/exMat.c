#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **A, m, p, **B, n, i, j, c = 1;

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
  
    if(p <= 2){
        for(i = 0; i < m; i++){
            for (j = 0; j < n; j++){
                M[i][j] = (A[i][1] * B[1][j]);    
            }
        }
    }else if (p == 3){
        for(i = 0; i < m; i++){
            for (j = 0; j < n; j++){
                M[i][j] = (A[i][1] * B[1][j]);    
            }
        }    
        for(i = 0; i < m; i++){
            for (j = 0; j < n; j++){
                M[i][j] = M[i][j] + (A[i][2] * B[2][j]);    
            }
        }       
    }else{
        for(i = 0; i < m; i++){
            for (j = 0; j < n; j++){
                M[i][j] = (A[i][1] * B[1][j]);    
            }
        }
        for(i = 0; i < m; i++){
            for (j = 0; j < n; j++){
                M[i][j] = M[i][j] + (A[i][2] * B[2][j]);    
            }
        }
        for(i = 0; i < m; i++){
            for (j = 0; j < n; j++){
                M[i][j] = M[i][j] + (A[i][3] * B[3][j]);    
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





