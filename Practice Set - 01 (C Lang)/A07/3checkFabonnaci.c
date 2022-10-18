#include <stdio.h>
int main ()
{
    int b = -1, a = 1, c, n, i;
    printf("enter : ");
    scanf("%d", &n);

    for (i=1 ; ; i++)
    {
        c = b + a;

        if(c==n)
        {
            printf("%d belongs to fabonacci", n);
            break;
        }

        if(c>n)
        {
            printf("%d doesn't belong to fabonacci", n);
            break;
        }

        b = a;
        a = c;
    }
    
    return 0;
}

/*
    int n, i, a=0, b=1;
    printf("enter : ");
    scanf("%d", &n);

    for (i=0; i<=n; i++)
    {
        if(n==a || n==b)
        {
            printf("its fabonacci");
            break;
        }

        if(i%2)    
            b += a;
        else
            a += b;
    }
*/