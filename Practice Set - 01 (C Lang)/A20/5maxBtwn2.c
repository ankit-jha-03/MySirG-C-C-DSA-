#include <stdio.h>
int max (int*, int*);
int main ()
{
    int a = 5, b = 10;

    printf("max is : %d", max(&a, &b));
    return 0;
}

int max (int* p, int* q)
{
    if(*p>*q)
        return *p;
    else
        return *q;
}