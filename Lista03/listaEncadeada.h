typedef struct lista{
    int info;
    struct lista* prox;
}Lista;

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
    if(l == NULL){
        printf ("Lista vazia");
    }
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

/*Lista* separa(Lista* l, int n)
{
    Lista* p = l;

    while(p->info != n){
        p = p->prox;
    }
    
    p = p->prox;

    Lista* l2 = p;
    
    return l2;
}*/

Lista* separa(Lista* l, int n)
{
    while(l->info != n){
        l = l->prox;
    }
    
    l = l->prox;

    Lista* l2 = l;
    
    l->prox = NULL;

    return l2;
}

