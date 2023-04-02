#include <stdio.h>
#include <stdlib.h>
#include "lista03.h"

int main(void)
{
    Lista* l = NULL;
    int* v;
    int n;
    printf("Quantos elementos o vetor ira armazenar: ");
    scanf("%d", &n);
    v = (int*)malloc(n*sizeof(int));

    int opc;
    
    do{
        menu();
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
            preencheVetor(&v, n);
            break;
        
        case 2:
            l = constroi(n, &v);
            if(l != NULL){
                printf("Lista criada com sucesso!\n");    
            }
            break;

        case 3:
            imprimeVetor(&v, n);
            break;

        case 4:
            imprimeLista(l);
            break;
        
        case 5: 
            printf("Fim do programa!");
            break;

        default:
            printf("Opcao invalida!\n");
            break;
        }
    }while(opc != 5);
    
    return 0;
}