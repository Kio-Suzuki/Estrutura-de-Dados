#include <stdio.h>
#define tam 100

int main()
{
    int A[tam], menor, temp;
    int qtdcomp = 0, qtdtroca = 0;
    
     for(int i = 99; i >= 0; i--){
        A[i-(i-1)] = i;  
    }
   
    for(int i = 0; i < tam - 1; i++){
        menor = i;
        for(int j = i+1; j < tam; j++)
            if(A[j] < A[menor]){
                menor = j;
                qtdcomp += 1;
        }
        temp = A[i];
        A[i] = A[menor];
        A[menor] = temp;
        qtdtroca += 1;
    }

    printf("\nQuantidade de comparacao: %d",qtdcomp);
    printf("\nQuantidade de trocas: %d",qtdtroca);

    return 0;
}
