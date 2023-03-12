#include <stdio.h>

void main()
{
    int x = 10, *p;
    p = &x;
    printf ("%x\n", p);
    printf ("%d\n", p);
    printf ("%d\n\n", *p);

    printf ("%x\n", p+1);
    printf ("%d\n", p+1);
    printf ("%d\n\n", *p+1);

    printf ("%x\n", (p+1));
    printf ("%d\n", (p+1));
    printf ("%d\n\n", *(p+1));
}