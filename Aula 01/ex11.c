#include <stdio.h>
#include <string.h>
#include <conio.h>

int* analisaPalavra(char str[], char x, int *pt);

int main()
{
    char str[25], x;
    int t = 0, *pt, *ppos;
    pt = &t;
    printf ("Digite uma palavra: ");
    scanf ("%s", str);
    printf ("Digite um letra contida na palavra: ");
    scanf (" %c", &x);

    ppos = analisaPalavra(str, x, pt);

    printf ("Total de letras = %d\n", *pt);
    for (int i = 0; i < *pt; i++){
        printf ("[%d] ", ppos[i]);
    }

    return 0;
}

int* analisaPalavra(char str[], char x, int *pt)
{
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == x){
            *pt = *pt + 1;
        }
    }
    
    int *v, cont = 0;
    v = malloc(*pt *sizeof(int));
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == x){
            cont++;
            v[cont-1] = i;
        }
        
    }

    return v;
}



