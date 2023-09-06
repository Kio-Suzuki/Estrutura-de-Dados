#include <stdio.h>
#include <math.h>

int main()
{
    int matriz[3][3] ={{2,3,2},{5,6,9},{1,0,7}}, mx = 0, contA = 1, contB = 1;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            contA++;
            if(matriz[i][j] > mx){
                contB++;
                mx = matriz[i][j];
            }
        }
    }

    printf("O maior valor da matriz = %d\n", mx);
    printf("A operacao fundamental A foi executada %d vezes\n", contA);
    printf("A operacao fundamental B foi executada %d vezes", contB);
    return 0;
}