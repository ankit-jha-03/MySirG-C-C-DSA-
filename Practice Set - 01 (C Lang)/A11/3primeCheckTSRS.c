#include <stdio.h>
int primeCheck(int);
int main ()
{
    int n, flag = 0;
    printf("enter : ");
    scanf("%d", &n);

    flag = primeCheck(n);

    if (flag)
        printf("yes, it is a prime number");
    else
        printf("no, its not a prime number");
    return 0;
}

int primeCheck(int n)
{
    int i;
    for(i=2; i<=n/2; i++)
    {
        if(n%i==0)
            return 0;
    }
    
    if(n>=2)                // to eleminate <=1 as a prime number
        return 1;
}