#include <stdio.h>
#include <string.h>

int analisaPalavra(char str[], char x);

int main()
{
    char str[25], x, total;
    printf ("Digite uma palavra: ");
    scanf ("%s", str);
    printf ("Digite um letra contida na palavra: ");
    scanf (" %c", &x);

    total = analisaPalavra(str, x);

    printf ("Total de letras = %d", total);

    return 0;
}

int analisaPalavra(char str[], char x)
{
    int cont = 0, cont2 = 0, v[25];
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == x){
            v[i] = i;
            cont++;
        }else{
            v[i] = 0;
        }
    } 

    int v2[cont];
    for (int i = 0; i < sizeof(v); i++){

    }
    return cont;   
}