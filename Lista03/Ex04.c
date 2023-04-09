#include <stdio.h>
#include <stdlib.h>
#include "listaEncadeadaFloat.h"

Lista* retira_prefixo(Lista* l, int n);

int main()
{
    Lista* l = NULL;
    int opc, y;
    float x;

    do{
        menu2();
        scanf("%d", &opc);

        switch(opc)
        {
        case 1:
            printf ("Valor: ");
            scanf ("%f", &x);
            l = insere(l, x);
            break;

        case 2:
            printf("Quantos numeros deseja remover: ");
            scanf("%d", &y);
            l = retira_prefixo(l, y);
            break;
        
        case 3:
            imprime(l);
            break;

        case 4:
            printf("Fim do programa!");
            break;
        
        default:
            printf("Opcao invalida!\n");
            break;
        
        }
    }while(opc != 4);
    
    return 0;
}

Lista* retira_prefixo(Lista* l, int n)
{
    Lista* temp = l->prox;
    if(l->prox == NULL){
        return NULL;
    }
    
    l->prox = temp->prox;
    free(temp);
    l->info--;
    
    
}


