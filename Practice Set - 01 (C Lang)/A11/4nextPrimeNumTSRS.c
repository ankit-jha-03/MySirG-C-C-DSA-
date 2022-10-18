#include <stdio.h>
int nextPrime(int);
int main ()
{
    int n;
    printf("enter : ");
    scanf("%d", &n);

    printf("the next prime number of the %d is : %d", n, nextPrime(n));
    return 0;
}

int nextPrime(int n)
{
    if(n<2)
        return 2;
        
    int i, j;
    for(i=n+1 ; ; i++)
    {
        for(j=2 ; j<=i/2 ; j++)
        {
            if(i%j==0)
                break;
        }

        if(j>i/2)
        {
            return i;
            break;
        }
    }
}


/*  options :  efficient??

int nextPrime(int n)
{
    if(n<2)
        return 2;
        
    int i, j;
    for(i=n+1 ; i>1 ; i++)          // or i=n>1?n+1:2
    {
        for(j=2 ; j<=i/2 ; j++)
        {
            if(i%j==0)
                break;
        }

        if(j>i/2)
        {
            return i;
            break;
        }
    }

    return 2;       // if n<1
}
*/