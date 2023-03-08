#include <stdio.h>  
#include <string.h> 

char *strcopy(char *str);

int main()
{
    char str[20], *pstr, cstr;
    pstr = &str;
    printf ("Digite uma palavra: ");
    scanf ("%s", str);

    cstr = strcopy(pstr);

    printf ("Palavara copiada: %s\n", cstr);

}

char *strcopy(char *str)
{
    char copia[20];
    copia = *str;
    return copia;
}