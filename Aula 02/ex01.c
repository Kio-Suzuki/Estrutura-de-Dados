#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void matrizTrans(int **m, int l, int c);
void freeMatriz(int **m, int l);

int main()
{
    int **m, l, c;
    srand(time(NULL));
    printf ("Linhas: ");
    scanf ("%d", &l);
    printf ("Colunas: ");
    scanf ("%d", &c);

    m = (int**)malloc(l*sizeof(int*));
    for(int i = 0; i < l; i++){
        m[i] = malloc(c*sizeof(int));
    }

    for(int i; i < l; i++){
        for (int j = 0; j < c; j++){
            m[i][j] = rand()%101;
            printf ("[%.2d] ", m[i][j]);
        }
        printf ("\n");
    }

    matrizTrans(m, l, c);
    
    freeMatriz(m, l);

    return 0;
}

void matrizTrans(int **m, int l, int c)
{
    int **mt;   

    mt = (int**)malloc(c*sizeof(int*));
    for(int i = 0; i < c; i++){
        mt[i] = malloc(l*sizeof(int));
    }
    printf ("\n");
   
    for(int i = 0; i < c; i++){
        for (int j = 0; j < l; j++){
            mt[i][j] = m[j][i];
            printf ("[%.2d] ", mt[i][j]);
        }
        printf ("\n");
    }
    freeMatriz(mt, l); 
}

void freeMatriz(int **m, int l)
{
    for(int i; i < l; i++){
        free(m[i]);
    }
    free(m);    
}





