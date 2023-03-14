#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **mat, n, lin, col;
    printf ("Linhas: ");
    scanf ("%d", &lin);
    printf ("Colunas: ");
    scanf ("%d", &col);

    //     mat = (int*)malloc(lin*col*sizeof(int));



    mat = (int**)malloc(lin*sizeof(int*));
    for(int i = 0; i < lin; i++){
        mat[i] = (int*)malloc(col*sizeof(int));
    }

    for (int i = 0; i < lin; i++){
        for (int j = 0; j < col; j++){
           //k = i*col+j;
            mat[i][j] = i + j;
        }
    }
    
}