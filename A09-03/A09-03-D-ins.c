#include <stdio.h>

int main()
{
    int chave = 0;
    int A[100];
    int i = 0;
    int qtdcomp = 0;
    int qtdtroca = 0;
    
    for(int i = 99; i >= 0; i--){
        A[i-(i-1)] = i;  
    }

    
    for(int j = 1; j < 100;j++){
        chave = A[j];
        i = j-1;
        while(i>=0 && A[i] > chave){
            A[i+1] = A[i];
            i = i - 1;
            if(i>=0 && A[i] < chave){
                qtdtroca = qtdtroca +1;
            
            }
            qtdcomp = qtdcomp + 1;
        }
        A[i+1] = chave;
    }

    printf("\nQuantidade de comparacao: %d",qtdcomp);
    printf("\nQuantidade de trocas: %d",qtdtroca);
    return 0;
}

