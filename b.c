#include <stdio.h>

int main()
{
    int chave = 0;
    int A[] = {5,4,3,2,1};
    int i = 0;
    int qtd = 0;
    
    for(int k = 0; k<5;k++){
        printf("%d ", A[k]);
    }
    
    for(int j = 1; j <5;j++){
        chave = A[j];
        i = j-1;
        while(i>=0 && A[i] > chave){
            A[i+1] = A[i];
            i = i - 1;
            qtd = qtd + 1;
        }
        A[i+1] = chave;
    }
    printf("\n");
    for(int k = 0; k < 5; k++){
        printf("%d ", A[k]);
    }
    printf("\nQuantidade de comparação: %d",qtd);
    
    return 0;
}

