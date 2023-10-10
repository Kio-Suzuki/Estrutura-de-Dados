#include <stdio.h>

int main()
{
    int chave = 0;
    int A[] = {1,2,3,4,5};
    int i = 0;
    
    for(int k = 0; k<5;k++){
        printf("%d ", A[k]);
    }
    
    for(int j = 1; j <5;j++){
        chave = A[j];
        i = j-1;
        while(i>=0 && A[i] < chave){
            A[i+1] = A[i];
            i = i - 1;
        }
        A[i+1] = chave;
    }
    printf("\n");
    for(int k = 0; k < 5; k++){
        printf("%d ", A[k]);
    }
    
    return 0;
}
