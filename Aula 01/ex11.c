#include <stdio.h>
#include <string.h>

void analisaPalavra(char str[], char x, int *pt);

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

    printf ("Total de letras = %d", *pt);

    return 0;
}

void analisaPalavra(char str[], char x, int *pt)
{
    int v[25];
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == x){
            v[i] = i;
            *pt = *pt + 1;
        }else{
            v[i] = 0;
        }
    }  
}