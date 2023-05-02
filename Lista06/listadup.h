/*=========================================
LISTAS DUPLAMENTE ENCADEADAS
===========================================*/

typedef struct listaDupI{
    int info;
    struct listaDupI *prox;
    struct listaDupI *ant;
}ListaDupI;

typedef struct listaDupF{
    float info;
    struct listaDupF *prox;
    struct listaDupF *ant;
}ListaDupF;

/*=========================================
DECLARAÇÃO DAS FUNÇÕES
===========================================*/

ListaDupI* insereI(ListaDupI* l, int n);
ListaDupI* separa(ListaDupI* l, int n);
ListaDupF* concatena(ListaDupF* l1, ListaDupF* l2);
ListaDupI* constroi(int n, int* v);
ListaDupF* retira_prefixo(ListaDupF* l, int n);
void imprimeI(ListaDupI* l);
void imprimeF(ListaDupF* l);
ListaDupI* insereI(ListaDupI* l, int n);
ListaDupF* insereF(ListaDupF* l, float n);

/*=========================================
FUNÇÕES
===========================================*/

ListaDupI* separa(ListaDupI* l, int n)
{
    ListaDupI* p = l;

    while(p->info != n){
        p = p->prox;
        l = l->prox;
    }
    p = p->prox; 

    ListaDupI* l2 = p;
    l->prox = NULL;

    return l2;
}

ListaDupF* concatena(ListaDupF* l1, ListaDupF* l2)
{
    if (l1 == NULL) {
        return l2;
    }
    if (l2 == NULL) {
        return l1;
    }

    ListaDupF* novo = l1;
    while (novo->prox != NULL) {
        novo = novo->prox;
    }
    novo->prox = l2;
    printf ("\nLista concatenada com sucesso\n");
    return l1;
}

ListaDupI* constroi(int n, int* v)
{
    ListaDupI* l = NULL;
    for(int i = n-1; i >= 0; i--){
        l = insereI(l, v[i]);
    }
    return l;
}

ListaDupF* retira_prefixo(ListaDupF* l, int n)
{
    int cont = 0;
    ListaDupF* p = l;
    
    if(p == NULL)
        printf("Lista vazia");
    
    do{
        p = p->prox;
        cont++;
    }while(cont < n);

    return p;
}

void imprimeI(ListaDupI* l)
{
    ListaDupI* p;
    if(l == NULL){
        printf ("Lista vazia");
    }

    for(p = l; p != NULL; p = p->prox){
        printf("[%d] ", p->info);
    }
    printf("\n");
}

void imprimeF(ListaDupF* l)
{
    ListaDupF* p;
    if(l == NULL){
        printf ("Lista vazia");
    }

    for(p = l; p != NULL; p = p->prox){
        printf("[%.1f] ", p->info);
    }
    printf("\n");
}

ListaDupI* insereI(ListaDupI* l, int n)
{
    ListaDupI* novo = (ListaDupI*)malloc(sizeof(ListaDupI));
    novo->info = n;
    novo->prox = l;
    novo->ant = NULL;
    if(l != NULL){
        l->ant = novo;
    }
    return novo;
}

ListaDupF* insereF(ListaDupF* l, float n)
{
    ListaDupF* novo = (ListaDupF*)malloc(sizeof(ListaDupF));
    novo->info = n;
    novo->prox = l;
    novo->ant = NULL;
    if(l != NULL){
        l->ant = novo;
    }
    return novo;
}

ListaDupF* retira(ListaDupF* l, int n)
{
    ListaDupF* p;
    
    if(l == p){
        l = p->prox;
    }else{
        p->ant->prox = p->prox;
    }

    if(p->prox != NULL){
        p->prox->ant = p->ant;
    }
    free(p);
    return l;
}
