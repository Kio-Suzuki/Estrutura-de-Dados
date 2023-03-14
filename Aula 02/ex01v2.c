#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void matrizTrans(int *m, int l, int c);

int main()
{
    int *m, l, c;
    srand(time(NULL));
    printf ("Linhas: ");
    scanf ("%d", &l);
    printf ("Colunas: ");
    scanf ("%d", &c);

    m = (int*)malloc(l*c*sizeof(int));

    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            m[i*c+j] = rand()%101;
            printf ("[%.2d] ", m[i*c+j]);
        }
        printf ("\n");
    }
    matrizTrans(m, l, c);
    return 0;
}

void matrizTrans(int *m, int l, int c)
{
    int *mt;
    mt = (int*)malloc(l*c*sizeof(int));

    printf ("\nMatriz Transposta:\n");
    for(int j = 0; j < l; j++){
        for(int i = 0; i < c; i++){
            mt[i*c+j] = m[i*c+j];
            printf ("[%.2d] ", m[i*c+j]);
        }
        printf ("\n");
    }
}

