#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cadastro{
    char nome[20];
    int matricula;
    float nota1;
    float nota2;
}aluno;

void imprimiAlunos(aluno *x, int n);

int main()
{
    aluno *x;
    int n;
    printf ("Quantos alunos serao cadastrados? ");
    scanf ("%d", &n);
    x = malloc(n*sizeof(aluno));
    
    for (int i = 0; i < n; i++){
        printf ("Nome: ");
        scanf ("%s", x[i].nome);
        printf ("Matricula: ");
        scanf ("%d", &x[i].matricula);
        printf ("Nota 1: ");
        scanf ("%f", &x[i].nota1);
        printf ("Nota 2: ");
        scanf ("%f", &x[i].nota2);
    }

    imprimiAlunos(x, n);

    return 0;
}

void imprimiAlunos(aluno *x, int n)
{
    for (int i = 0; i < n; i++){
            printf ("\nAluno %d\n", i+1);
            printf ("Nome: %s\n", x[i].nome);
            printf ("Matricula: %d\n", x[i].matricula);
            printf ("Media: %.1f\n", (x[i].nota1 + x[i].nota2)/2);
        }    
}



