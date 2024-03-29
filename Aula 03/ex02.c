#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
    float info;
    struct lista* prox;
}Lista;

Lista* insere(Lista* l, float i);
void imprime(Lista* l);
Lista* separa(Lista* l, float n);
void somaLista(Lista* l);
Lista* apaga(Lista* l, float n);
void menu();

int main(void)
{
    Lista* l = NULL;
    Lista* l2 = NULL;
    int opc, x;

    do{
        menu();
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
            printf ("Valor: ");
            scanf ("%f", &x);
            l = insere(l, x);
            break;
        
        case 2: 
            printf("\nLISTA:\n");
            imprime(l);
            imprime(l2);
            break;

        case 3:
            printf("Separar a lista a partir do valor: ");
            scanf ("%d", &x);
            l2 = separa(l, x);
            break;

        case 4:
            somaLista(l);
            break;

        case 5: 
            printf("Fim do programa!");

        default:
            printf("Opcao invalida!\n");
            break;
        }
    }while(opc != 3);
    
    return 0;
}

Lista* insere(Lista* l, float i)
{
    Lista* novaLista = (Lista*)malloc(sizeof(Lista));
    novaLista->info = i;
    novaLista->prox = l;
    return novaLista;
}

void imprime(Lista* l)
{
    Lista* p;
    for(p = l; p != NULL; p = p->prox){
        printf("[%.2f] ", p->info);
    }
    printf("\n");
}

Lista* separa(Lista* l, float n)
{
    Lista* p = l;

    while(p->info != n){
        p = p->prox;
    }
    
    p = p->prox;
    
    Lista* novaLista = (Lista*)malloc(sizeof(Lista));
    novaLista->info = p->info;
    novaLista->prox = p->prox;
    return novaLista;
}

void somaLista(Lista* l)
{
    Lista* p;
    int cont = 0;
    for(p = l; p != NULL; p = p->prox){
        cont += p->info;
    }
    printf ("SOMA: %d", cont);
}

Lista* apaga(Lista* l, float n)
{
    Lista* p = l;
    while(p != NULL){
        Lista* t = p->prox;
        p = p->prox;
    }
    p = p->prox;
    free(p);
}

void menu()
{
    printf("\n1 - Inserir valor\n");
    printf("2 - Mostrar lista\n");
    printf("3 - Separar lista\n");
    printf("4 - Soma lista\n");
    printf("5 - Sair\n");
    printf("Opcao: ");
}