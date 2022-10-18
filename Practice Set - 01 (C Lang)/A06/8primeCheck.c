#include <stdio.h>
int main ()
{
    int i,n;                            // can use flag variable/indigater as well
    printf("enter : ");
    scanf("%d", &n);

    if(n<2)
        printf("%d is not a prime number", n);

    else
    {
        for(i=2; i<=n/2; i++)                           // square root will be more efficient
        {
            if (n%i==0)
            {
                printf("%d is not a prime number", n);
                break;
            }
        }

        if(i>n/2)
            printf("%d is a prime number", n);
    }
    
    return 0;
}

/*  we can decrease number of loops
    if(n<2)
        printf("%d is not a prime number", n);

    else
    {
        for (i=2; ; i++)
        {
            if(i==n)
            {
                printf("%d is a prime number", n);
                break;
            }

            if (n%i==0)
            {
                printf("%d is not a prime number", n);
                break;
            }
        }

        
    }
*/