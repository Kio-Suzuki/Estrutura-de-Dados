#include <stdio.h>

int main()
{
    int v[10] = {3, 5, 8, 9, 8, 7, 7, 6, 2, 0}, aux, t;
    t = sizeof(v)/sizeof(v[0]);
    for(int i = 1; i < t; i++){
        for(int j = 0; j < t-1; j++){
            if(v[j] > v[j+1]){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
    for(int i = 0; i < 10; i++){
        printf("%d - ", v[i]);
    }
    return 0;
}