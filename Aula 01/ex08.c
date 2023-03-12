#include <stdio.h>  
#include <string.h> 
#include <conio.h>

char *strcopy(char *str);

void main()
{
    char str[20], *copia;
    printf ("Digite uma palavra: ");
    gets (str);
    
    copia = *strcopy(str);

    printf ("Palavara copiada: %s\n", *copia);
}

char *strcopy(char *str)
{
    char *cstr = malloc(10);
    strcpy(cstr,str);
    printf ("palavra da funcao copiada: %s\n", cstr);
    return cstr;
}