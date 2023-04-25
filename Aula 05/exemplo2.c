#include <stdio.h>
#include <stdlib.h>

typedef struct listaC{
    int info;
    struct listaC* prox;
}ListaC;

int main()
{

    l1 = retira_prefixo(ListaC l1, 3)
    
}

ListaC* contarNos(ListaC* l)
{
    ListaC* p = l;
    int cont = 0;
    if(l != NULL){
        do{
         p = p->prox;
            cont++;
        }while(p != l);
   }

   return cont;
}

ListaC retira_prefixo(ListaC l1, int n)
{
    ListaC* p = l, *pp, *pfinal;
    int cont = 1;

    if(n > contarNos(l)){
        return eliminar(l);
    }else{
        while(cont < n){
            p = p->prox; //vai parar na posição anterior da separação
            cont++;
        }
        pp = p->prox;
        pfinal = pp;
        while(pfinal->prox != l){
            pfinal = pfinal->prox;
        }
        pfinal->prox = pp;
    }
    p->prox = l;
    eliminar(l);
    return pp;
}