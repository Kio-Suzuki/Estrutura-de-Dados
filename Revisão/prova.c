#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p;
    int v[]={10,7,2,6,3};
    p = v;

    printf("%d\n", *(v+1));
    return 0;
}