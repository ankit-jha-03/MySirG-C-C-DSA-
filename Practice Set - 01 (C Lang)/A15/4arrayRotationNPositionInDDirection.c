// there many other ways as well : 
#include <stdio.h>
int rotation (int a[], int, int, int);
int main ()
{
    int n;
    printf("enter size of array : ");
    scanf("%d", &n);

    int a[n], D, N, i;

    printf("enter %d numbers : ", n);
    
    for (i=0; i<n; i++)
        scanf("%d", &a[i]);
    
    do
    {
        printf("enter the direction of rotation/shifting : ");
        printf("\n(for left - press 1)\n(for right - press 2)\n");
        scanf("%d", &D);
    }   while(D!=1 && D!=2);    // only 1 or 2

    do
    {
        printf("enter the number for rotating toward given direction : ");
        scanf("%d", &N);
    }   while(N<0);             // only +ve Number
    
    rotation(a, n, D, N);

    for (i=0; i<n; i++)
        printf("%d ", a[i]);

    return 0;
}

int rotation (int a[], int n, int D, int N)     // maybe, can be optimized by reversing left to right and via-versa, if N is more than n/2.
{
    int i, temp;
    N = N%n;
    if(D==1)
    {
        for( ; N!=0; N--)
        {
            temp = a[0];
            for(i=0; i<n-1; i++)
            {
                a[i]=a[i+1];
            }
            a[i] = temp;
        }
    }
    else
    {
        for( ; N!=0; N--)
        {
            temp = a[n-1];
            for(i=n-1; i>0; i--)
            {
                a[i]=a[i-1];
            }
            a[0] = temp;
        }
    }
}


/* on 1st try : (less time complexity, but more memory consumption (extra array) & hard to understand)

    if(D==1)
    {
        for(i=0; i<n; i++)
        {
            b[i] = a[(i+N)%n];
        }
    }
    else
    {
        for(i=0; i<n; i++)
        {
            if(i-N>=0)
                b[i] = a[(i-N)%n];
            else
                b[i] = a[n+((i-N)%n)];
        }
    }

    for (i=0; i<n; i++)
        a[i]=b[i];
*/