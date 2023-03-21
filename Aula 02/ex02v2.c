#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int *A, m, p, *B, n, *M, c = 1, i, j;

    srand(time(NULL));
    printf ("Linhas: ");
    scanf ("%d", &m);
    printf ("Colunas: ");
    scanf ("%d", &p);
    
    A = (int*)malloc(m*p*sizeof(int));
    
    printf ("\nMATRIZ A\n");
    for(i = 0; i < m; i++){
        for(j = 0; j < p; j++){
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
    printf("\nMATRIZ B\n");
    for(i = 0; i < p; i++){
        for(j = 0; j < n; j++){
            B[i*n+j] = c;
            printf("[%.2d] ", B[i*n+j]);
            c++;
        }
        printf("\n");
    }
   
    M = (int*)malloc(m*n*sizeof(int));
    
    if(p <= 3){
        for(i = 0; i < m; i++){
            for (j = 0; j < n; j++){
                M[i*n+j] = A[i*p+1] * B[1*n+j];   
            }
        }
        for(i = 0; i < m; i++){
            for (j = 0; j < n; j++){
                M[i*n+j] = M[i*n+j] + A[i*p+2] * B[2*n+j];    
            }
        } 
    }else if (p == 4){
        for(i = 0; i < m; i++){
            for (j = 0; j < n; j++){
                M[i*n+j] = A[i*p+1] * B[1*n+j];    
            }
        }    
        for(i = 0; i < m; i++){
            for (j = 0; j < n; j++){
                M[i*n+j] = M[i*n+j] + A[i*p+2] * B[2*n+j];    
            }
        }       
    }else{
        for(i = 0; i < m; i++){
            for (j = 0; j < n; j++){
                M[i*n+j] = A[i*p+1] * B[1*n+j];    
            }
        }
        for(i = 0; i < m; i++){
            for (j = 0; j < n; j++){
                M[i*n+j] = M[i*n+j] + A[i*p+2] * B[2*n+j];     
            }
        }
        for(i = 0; i < m; i++){
            for (j = 0; j < n; j++){
                M[i*n+j] = M[i*n+j] + A[i*p+3] * B[3*n+j];    
            }
        }    
    }

    printf ("\nMATRIZ M\n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("[%.2d] ", M[i*n+j]);
        }
        printf("\n");
    }
    
    return 0;
}

