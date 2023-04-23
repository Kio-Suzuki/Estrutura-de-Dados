typedef struct lista{
    float info;
    struct lista* prox;
}Lista;

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
    if(l == NULL){
        printf ("Lista vazia");
    }

    for(p = l; p != NULL; p = p->prox){
        printf("[%.1f] ", p->info);
    }
    printf("\n");
}

Lista* retira_prefixo(Lista* l, int n)
{
    int cont = 0;

    if(l->prox == NULL)
        printf("Lista vazia");
    
    do{
        Lista* temp = l;
        l = temp->prox;
        cont++;
    }while(cont < n);

    return l;
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
    printf ("\nLista concatenada com sucesso\n");
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
    printf ("Opcao: ");
}

void menu2()
{
    printf("\n1 - Inserir valor na lista\n");
    printf("2 - Remover nos da lista\n");
    printf("3 - Mostra lista\n");
    printf("4 - Sair\n");
}
