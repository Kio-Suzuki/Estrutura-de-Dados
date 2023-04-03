#include <stdio.h>
#include <stdlib.h>
#include "listaEncadeadaFloat.h"

int main(void)
{
    Lista* l1 = NULL;
    Lista* l2 = NULL;

    int opc;
    float x;

    do{
        menu();
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
            printf ("Valor: ");
            scanf ("%f", &x);
            l1 = insere(l1, x);
            break;
        
        case 2:
            printf ("Valor: ");
            scanf ("%f", &x);
            l2 = insere(l2, x);
            break;

        case 3:
            concatena(l1, l2);
            break;

        case 4:
            printf("LISTA 1:\n");
            imprime(l1);
            printf("LISTA 2:\n");
            imprime(l2);
            break;

        case 5:
            printf("LISTA CONCATENADA:\n");
            imprime(l1);
            break;

        case 6: 
            printf("Fim do programa!");
            break;

        default:
            printf("Opcao invalida!\n");
            break;
        }
    }while(opc != 6);
    
    return 0;
}

