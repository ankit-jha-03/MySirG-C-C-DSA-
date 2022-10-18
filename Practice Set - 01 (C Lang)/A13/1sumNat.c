#include <stdio.h>
int sumNat(int);
int main ()
{
    int n;
    printf("enter : ");
    scanf("%d", &n);

    printf("sum of first %d natural number is : %d", n, sumNat(n));
    return 0;
}

int sumNat(int n)
{
    if(n<1)
        return 0;

    return n + sumNat(n-1);
}