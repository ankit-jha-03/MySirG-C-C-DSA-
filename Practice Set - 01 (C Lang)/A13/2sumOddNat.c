#include <stdio.h>
int sumOddNat(int);
int main ()
{
    int n;
    printf("enter : ");
    scanf("%d", &n);

    printf("sum of first %d odd natural number is : %d", n, sumOddNat(n));
    return 0;
}

int sumOddNat(int n)
{
    if(n<1)
        return 0;

    return 2*n-1 + sumOddNat(n-1);
}