#include <stdio.h>
int square (int);
int main ()
{
    int n;
    printf("enter : ");
    scanf("%d", &n);

    printf("square of %d is : %d", n, square(n));
    return 0;
}

int square (int a)
{
    return a*a;
}