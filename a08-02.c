#include <stdio.h>
#define tam 50

int main()
{
    int vet[tam], x = 49, menor, temp;


    for(int i = 0; i < tam; i++){
        vet[i] = x;
        x--;
    } 
   
    for(int i = 0; i < tam - 1; i++){
        menor = i;
        for(int j = i+1; j < tam; j++)
            if(vet[j] < vet[menor]){
                menor = j;
        }
        temp = vet[i];
        vet[i] = vet[menor];
        vet[menor] = temp;
    }

    for(int i = 0; i < tam; i++){
        printf("[%d] ", vet[i]);
    }

    return 0;
}