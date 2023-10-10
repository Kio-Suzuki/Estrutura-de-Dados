#include <stdio.h>

int main()
{
    int vet[10] = {40, 66, 5, 90, 37, 22, 12, 99, 43, 13};
    int chave, j;

    for(int i = 1; i < 10; i++){
        chave = vet[i];
        j = i - 1; // j = 0
        while(j >= 0 && vet[j] > chave){
            vet[j+1] = vet[j];
            j = j - 1;
        }
        vet[j+1] = chave;
    }
    for(int i = 0; i < 10; i++){
        printf("%d ", vet[i]);
    }
}