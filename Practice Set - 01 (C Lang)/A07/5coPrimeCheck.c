#include <stdio.h>
int main ()
{
    int i,a,b;
    printf("enter two numbers : ");
    scanf("%d %d", &a, &b);

    for (i = a>b?b:a ; ;i--)
    {
        if (a%i == 0 && b%i == 0)
        {
            break;
        }
    }

    if(i==1)
        printf("these numbers are co-prime numbers");
    else
        printf("these numbers are not co-prime numbers");
        
    return 0;
}