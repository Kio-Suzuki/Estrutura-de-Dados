#include <stdio.h>
#include <string.h>


int main(){
    char *str1,*str2;
    printf("Entre com uma string: ");
    gets(str1);
    strcpy(*str2, *str1);
    printf("String copiada = %s",*str2);
    return(0);
}