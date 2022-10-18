#include <stdio.h>
void nPrime(int);
int main ()
{
    int n;
    printf("enter : ");
    scanf("%d", &n);

    nPrime(n);

    return 0;
}

void nPrime(int n)
{
    int i,j,k;
    for (i=2, k=1 ; k<=n; i++)
    {
        for (j=2; j<=i/2; j++)
        {
            if(i%j==0)
                break;
        }
        
        if(j>i/2)
        {
            printf("%d\n", i);
            k++;
        }
    }
}