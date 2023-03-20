#include <stdio.h>
#include <stdlib.h>

void printMatriz(int **m, int l, int c, int k);
void freeMatriz(int **m, int l);
void criaMatriz(int **m, int l, int c);

int main()
{
    int **A, m, p, **B, n, i, j, c = 1;

    printf ("Linhas: ");
    scanf ("%d", &m);
    printf ("Colunas: ");
    scanf ("%d", &p);

    A = (int**)malloc(m*sizeof(int*));
    criaMatriz(A, m, p);
    
    printMatriz(A, m, p, c);

    printf ("\nColunas: ");
    scanf ("%d", &n);
    
    B = (int**)malloc(p*sizeof(int*));
    criaMatriz(B, p, n);
    
    printMatriz(B, p, n, c);

    int **M;
    M = (int**)malloc(m*sizeof(int*));
    criaMatriz(M, m, n);
  
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
    
    freeMatriz(A, m);
    freeMatriz(B, p);
    freeMatriz(M, m);

    return 0;
}

void criaMatriz(int **m, int l, int c)
{
    for(int i = 0; i < l; i++){
        m[i] = malloc(c*sizeof(int));
    }
}

void printMatriz(int **m, int l, int c, int k)
{
    printf ("\nMATRIZ:\n");
    for(int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            m[i][j] = k;
            printf ("[%.2d] ", m[i][j]);
            k++;
        }
        printf ("\n");
    }
}

void freeMatriz(int **m, int l)
{
    for(int i; i < l; i++){
        free(m[i]);
    }
    free(m);    
}








