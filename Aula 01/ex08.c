#include <stdio.h>  
#include <string.h> 

char *strcopy(char *str);

int main()
{
    char str[20], *pstr, cstr[20];
    pstr = &str;
    printf ("Digite uma palavra: ");
    scanf ("%s", str);

    

    printf ("Palavara copiada: %s\n", strcopy(pstr));

}

char *strcopy(char *str)
{
    char copia[20], *pc;
    pc = &copia;
    strcpy  (copia, str);
    
    printf ("%s\n", copia);
    return *pc;
}