#include <stdio.h>
int main ()
{
    int i, j, n1, n2;
    printf("enter two numbers : ");
    scanf("%d %d", &n1, &n2);

    if (n1<1)                       // to neglate 1 and negative prime numbers as output
        n1 = 1;

    for (i=n1+1; i<n2; i++)
    {
        for (j=2; j<=i/2; j++)
        {
            if(i%j==0)
                break;
        }
        
        if(j>i/2)
            printf("%d\n", i);
    }
    
    return 0;
}