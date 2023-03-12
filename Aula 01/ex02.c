#include <stdio.h>
#include <string.h>

int main()
{
    char *a, *b;
    int x;
    a = "abacate";
    b = "uva";
    x = strcmp (a,b);
    if (x < 0){
        printf ("%s vem antes de %s no dicionario", a, b);
    }else{
        printf ("%s vem depois de %s no dicionario", a, b);
    }
    return 0;
}



