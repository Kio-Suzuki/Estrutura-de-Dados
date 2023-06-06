#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 5

typedef struct fila{
	int ini;
	int fim;
    int cod[MAX];
	int id[MAX];
}Fila;

Fila* cria(){
	Fila* f = (Fila*) malloc(sizeof(Fila));
	f->ini = 0;
	f->fim = 0;
	return f;
}

void incluir(Fila *f, int x, int y) {
    if (f->fim == MAX) {
        printf ("Fila cheia!");
        return;
    }
   
    f->id[f->fim] = x;	
    f->cod[f->fim] = y;
    f->fim++;
}

void imprime(Fila* f) {
    printf ("\nFila de processos:\n");
    if (f->ini == f->fim) {
        printf ("Fila vazia!");
    }else{
        for(int i = f->ini; i < f->fim; i++){
            printf("[id] - %d [job] - %d\n", f->id[i], f->cod[i]);
        }
    }
}

void retirar(Fila*f) {
    if (f->ini != f->fim) {
        f->ini++;
    } else {
        printf("Fila vazia!");
    }
    
}

int main()
{
    Fila *f;
    int id, cod, opt;

    f = cria();
    
    do{
        printf("\n1 - Incluir processo\n");
        printf("2 - Retirar processo\n");
        printf("3 - Imprimir fila de processos\n");
        printf("4 - Sair\n");
        printf("Digite: ");
        scanf("%d", &opt);

        switch (opt)
        {
        case 1:
            printf("id do processo: ");
            scanf("%d", &id);
            printf("job: ");
            scanf("%d", &cod);
            incluir(f, id, cod);
            break;
        case 2:
            retirar(f);
            break;
        case 3:
            imprime(f);
            break;

         case 4:
            printf("Finalizando...");
            break;
        
        default:
            printf("Valor incorreto, digite novamente: ");
            break;
        }
    }while(opt != 4);
    
    return 0;

}
