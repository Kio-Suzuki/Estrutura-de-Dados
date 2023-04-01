#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
    int info;
    struct lista* prox;
}Lista;

void preencheVetor(int* v, int n);
Lista* insere(Lista* l, int x);
void imprimeLista(Lista* l);
Lista* constroi(int n, int* v);
void imprimeVetor(int* v, int n);
void menu();

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

void preencheVetor(int* v, int n)
{
    for(int i = 0; i < n; i++){
        printf ("Digite um valor: ");
        scanf ("%d", &v[i]);
    }
}

Lista* insere(Lista* l, int x)
{
    Lista* novaLista = (Lista*)malloc(sizeof(Lista));
    novaLista->info = x;
    novaLista->prox = l;
    return novaLista;
}

void imprimeLista(Lista* l)
{
    Lista* p;
    for(p = l; p != NULL; p = p->prox){
        printf("[%d] ", p->info);
    }
    printf("\n");
}

Lista* constroi(int n, int* v)
{
    Lista* l = NULL;
    for(int i = n-1; i >= 0; i--){
        l = insere(l, v[i]);
    }
    return l;
}
            
void imprimeVetor(int* v, int n)
{
    for(int i = 0; i < n; i++){
        printf ("[%d] ", v[i]);
    }    
}

void menu()
{
    printf("\n1 - Preencher vetor\n");
    printf("2 - Inserir valores do vetor a lista\n");
    printf("3 - Mostrar Vetor\n");
    printf("4 - Mostrar Lista\n");
    printf("5 - Sair\n");
}