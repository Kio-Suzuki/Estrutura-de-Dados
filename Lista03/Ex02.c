#include <stdio.h>
#include <stdlib.h>

typedef struct lista {
    int numero;
    struct lista* prox;
}Lista;

void insere(Lista** head_ref, int valor) {
    Lista* novaLista = (Lista*)malloc(sizeof(Lista));
    novaLista->numero = valor;
    novaLista->prox = (*head_ref);
    (*head_ref) = novaLista;
}

void imprime(Lista* l1) {
    while (l1 != NULL) {
        printf("%d ", l1->numero);
        l1 = l1->prox;
    }
}

Lista* copiaLista(Lista* l1) {
    if (l1 == NULL) {
        return NULL;
    }
    Lista* temp = (Lista*)malloc(sizeof(Lista));
    temp->numero = l1->numero;
    temp->prox = copiaLista(l1->prox);
    return temp;
}

int main() {
    Lista* l1 = NULL;
    insere(&l1, 1);
    insere(&l1, 2);
    insere(&l1, 3);
    insere(&l1, 4);
    insere(&l1, 5);

    printf("Lista Original:\n");
    imprime(l1);

    Lista* lista_copia = copiaLista(l1);

    printf("\nLista Copia:\n");
    imprime(lista_copia);

    return 0;
}