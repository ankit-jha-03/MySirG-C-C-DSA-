#include <stdio.h>
int main ()
{
    int i, j, n;
    printf("enter : ");
    scanf("%d", &n);

    if(n<1)                         // to remove error
        n=1;

    for(i = n+1 ;  ; i++)
    {
        for(j=2; j<=i/2;j++)
        {
            if(i%j==0)
                break;
        }

        if(j>i/2)
            break;
    }
    
    printf("next prime number of %d is : %d", n, i);

    return 0;
}