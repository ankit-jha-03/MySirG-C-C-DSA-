#include <stdio.h>
int sumSquare(int);
int main ()
{
    int n;
    printf("enter : ");
    scanf("%d", &n);

    printf("sum of first %d squares is : %d", n, sumSquare(n));
    return 0;
}

int sumSquare(int n)
{
    if(n<1)
        return 0;

    return n*n + sumSquare(n-1);
}