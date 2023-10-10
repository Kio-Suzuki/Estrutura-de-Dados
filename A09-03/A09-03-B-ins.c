#include <stdio.h>

int main()
{
    int chave = 0;
    int A[1000];
    int i = 0;
    int qtdcomp = 0;
    int qtdtroca = 0;
    
    for(int i = 0; i < 1000; i++){
        A[i] = rand() % 10000;  
    }

    
    for(int j = 1; j < 1000;j++){
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

