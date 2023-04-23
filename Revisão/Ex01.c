#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
    int info;
    struct lista* prox;
}Lista;

Lista* iniciar();
void menu();
Lista* insereData(Lista*, int);
Lista* removeData(Lista*, int);
Lista* imprimiLista(Lista*);

int main()
{
    Lista* l;
    l = iniciar();
    int opc, x;

    do{
        menu();
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
            printf("Valor: ");
            scanf("%d", &x);
            l = insereData(l, x);
            break;

        case 2:
            printf("Valor: ");
            scanf("%d", &x);
            l = removeData(l, x);
            break;

        case 3:
            imprimiLista(l);
            break;

        case 4:
            printf("Saindo...");
            break;
        
        default:
        printf ("Opcao invalida, digite novamente");
            break;
        }

    }while(opc != 4);

    return 0;

}

Lista* iniciar()
{
    return NULL;
}

void menu()
{
    printf("\nMENU");
    printf("\n1 - Inserir data");
    printf("\n2 - Remover data");
    printf("\n3 - Imprimir lista");
    printf("\n4 - Sair");
    printf("\nOpcao: ");
}

Lista* insereData(Lista* l, int x)
{
    Lista* p = (Lista*)malloc(sizeof(Lista));

    p->info = x;
    p->prox = l;

    return p;
}

Lista* removeData(Lista* l, int x)
{
    Lista* ant = NULL;
    Lista* p = l;
    while(p != NULL && p->info != x){
        ant = p;
        p = p->prox;
    }
    
    if(p == NULL)
        return l;

    if(ant == NULL){
        l = p->prox;
    }else{
        ant->prox = p->prox;
    }
    
    free(p);
    return l;
}

Lista* imprimiLista(Lista* l)
{
    Lista* p;
    printf("\nLISTA:\n");
    for(p = l; p != NULL; p = p->prox){
        printf ("[%d] -> ", p->info);
    }
    printf ("NULL");
}