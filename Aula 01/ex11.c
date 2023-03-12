#include <stdio.h>
#include <string.h>
#include <conio.h>

int* analisaPalavra(char str[], char x, int *pt);

int main()
{
    char str[25], x;
    int t = 0, *pt;
    pt = &t;
    printf ("Digite uma palavra: ");
    scanf ("%s", str);
    printf ("Digite um letra contida na palavra: ");
    scanf (" %c", &x);

    analisaPalavra(str, x, pt);

    printf ("Total de letras = %d\n", *pt);
    for (int i = 0; i < *pt; i++){
        printf ("[%d] ", (analisaPalavra));
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

    printf ("v[0] = %d\n", v[0]);
    printf ("v[1] = %d\n", v[1]);
    
    return v;
}



