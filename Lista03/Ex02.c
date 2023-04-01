#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
    float info;
    struct lista* prox;
}Lista;

Lista* insere(Lista* l, float i);
void imprime(Lista* l);
Lista* concatena(Lista* l1, Lista* l2);
void menu();

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

Lista* insere(Lista* l, float x)
{
    Lista* novaLista = (Lista*)malloc(sizeof(Lista));
    novaLista->info = x;
    novaLista->prox = l;
    return novaLista;
}

void imprime(Lista* l)
{
    Lista* p;
    for(p = l; p != NULL; p = p->prox){
        printf("[%.1f] ", p->info);
    }
    printf("\n");
}

Lista* concatena(Lista* l1, Lista* l2)
{
    if (l1 == NULL) {
        return l2;
    }
    if (l2 == NULL) {
        return l1;
    }

    Lista* novalista = l1;
    while (novalista->prox != NULL) {
        novalista = novalista->prox;
    }
    novalista->prox = l2;
    return l1;
}

void menu()
{
    printf("\n1 - Inserir valor na lista 1\n");
    printf("2 - Inserir valor na lista 2\n");
    printf("3 - Concatenar listas 1 e 2\n");
    printf("4 - Mostrar listas 1 e 2\n");
    printf("5 - Mostrar lista concatenada\n");
    printf("6 - Sair\n");
}