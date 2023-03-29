#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
    int valor;
    struct lista* prox; 
}Lista;

void apresentarMenu();
Lista* inserirValor(Lista* l, int n);
void imprime(Lista* l);

int main()
{
    Lista* l = (Lista*)malloc(sizeof(Lista));
    l = NULL;
    int opc, x;
    do{
        apresentarMenu();
        scanf("%d", &opc);

        switch(opc){
            case 1:
                printf ("\nQual valor gostaria de inserir: ");
                scanf ("%d", &x);
                l = inserirValor(l, x);
                
                break;

            case 2:
                printf ("\nLISTA:\n");
                imprime(l);
                break;

            case 3:
                printf ("Fim do programa");
                break;

            default:
                printf("\nOpcao invalida, escolha outra: \n");
        }

    }while(opc != 3);

    return 0;
}

void apresentarMenu()
{
    printf("\n1 - Inserir elemento na lista\n");
    printf("2 - Mostrar lista\n");
    printf("3 - Sair\n");
}

Lista* inserirValor(Lista* l, int n)
{
    Lista* novoValor = (Lista*)malloc(sizeof(Lista));
    novoValor->valor = n;
    novoValor->prox = l;
    return novoValor;
}

void imprime(Lista* l)
{
    Lista* p;
    for(p = l; p != NULL; p = p->prox){
        printf("[%d] ", p->valor);
    }
}