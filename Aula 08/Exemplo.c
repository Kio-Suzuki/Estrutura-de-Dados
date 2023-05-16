#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    float info;
    struct no* prox;
}No;

typedef struct fila {
    No* ini;
    No* fim;
}Fila;