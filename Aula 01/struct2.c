#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa{
    char nome[20];
    float altura;
    float peso;
    int cpf;
    char sexo;
}dados;

void apresentaIMC(dados *p, int n);

int main()
{
    dados *p;
    int n;
    printf ("Quantas pessoas serao cadastradas? ");
    scanf ("%d", &n);
    p = malloc(n*sizeof(dados));

    for(int i = 0; i < n; i++){
        printf ("Nome: ");
        scanf ("%s", p[i].nome);
        printf ("Altura: ");
        scanf ("%f", &p[i].altura);
        printf ("Peso: ");
        scanf ("%f", &p[i].peso);
        printf ("CPF: ");
        scanf ("%d", &p[i].cpf);
        printf ("Sexo (m/f): ");
        scanf (" %c", &p[i].sexo);
    }
    apresentaIMC(p, n);
    return 0;
}

void apresentaIMC(dados *p, int n)
{
    int cpf, cont = 0;
    char opc;
    do{
        printf ("\nDigite o CPF: ");
        scanf ("%d", &cpf);
        for(int i = 0; i < n; i++){
            if (cpf == p[i].cpf){
                printf ("IMC: %.2f\n", p[i].peso/(p[i].altura*p[i].altura));  
            }else{
                cont++;
            }
        }
        if (cont == n){
            printf ("Nenhum CPF encontrado, buscar novamente (s/n)?: ");
            scanf (" %c", &opc); 
        }else{
            printf ("Deseja buscar novamente (s/n)?: ");
            scanf (" %c", &opc); 
        }
        cont = 0;
    }while(opc == 's');
}


