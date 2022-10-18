#include <stdio.h>
int fact(int);
int main ()
{
    int n;
    printf("enter : ");
    scanf("%d", &n);

    printf("factorial of %d is : %d", n,fact(n));
    return 0;
}


int fact(int n)
{
    int fact = 1;
    while(n>1)
    {
        fact *= n;
        n--;
    }
    return fact;
}