#include <stdio.h>
#include <stdlib.h> 

int find_number(int *vet, int n, int number);

int main()
{
    int *vet, n = 8;

    vet = (int *)malloc(n * sizeof(int));

    vet[0] = 0;
    vet[1] = 3;
    vet[2] = 6;
    vet[3] = 2;
    vet[4] = 9;
    vet[5] = 7;
    vet[6] = 0;
    vet[7] = 6;

    printf("A operacao fundamental foi executada %d vezes\n", find_number(vet, n, 0)+1);

    printf("A operacao fundamental foi executada %d vezes\n", find_number(vet, n, 7)+1);

    free(vet);
    return 0;
}

int find_number(int *vet, int n, int number){

    for(int i = 0; i < n; i++){
        if(vet[i] == number){
            return i;
        }
    }
    return -1;
}