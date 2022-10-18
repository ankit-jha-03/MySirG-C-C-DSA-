#include <stdio.h>
int digiSum(int);
int main ()
{
    int n;
    printf("enter : ");
    scanf("%d", &n);

    printf("sum of the digits of %d is : %d", n, digiSum(n));
    return 0;
}

int digiSum(int n)
{
    if(n<=0)
        return 0;
    
    return n%10 + digiSum(n/10);
}