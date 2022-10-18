#include <stdio.h>
int sumEvenNat(int);
int main ()
{
    int n;
    printf("enter : ");
    scanf("%d", &n);

    printf("sum of first %d even natural number is : %d", n, sumEvenNat(n));
    return 0;
}

int sumEvenNat(int n)
{
    if(n<1)
        return 0;

    return 2*n + sumEvenNat(n-1);
}