#include <stdio.h>
#include <stdlib.h>
#include "pilhaLIS.h"

int main(){
	Pilha *p1, *p2;
	float r;
	p1 = cria();
    p2 = cria();
	push(p1, 1);
	push(p1, 3);
	push(p1, 4);
	push(p2, 2);
    push(p2, 4);
    push(p2, 5);
	imprime(p1);
	printf("\n");
	r = pop(p1);
	printf("\nNo %f excluido!\n",r);
	imprime(p1);
	
	libera(p1);

	imprime(p1);
	return 0;
}