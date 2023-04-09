#include <stdio.h>
#include <stdlib.h>
#include "listaEncadeadaFloat.h"

int main()
{
    Lista* l = NULL;
    int opc, y;
    float x;

    do{
        menu2();
        printf ("Opcao: ");
        scanf("%d", &opc);

        switch(opc)
        {
        case 1:
            printf ("Valor: ");
            scanf ("%f", &x);
            l = insere(l, x);
            break;

        case 2:
            printf("Quantos nos deseja remover: ");
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