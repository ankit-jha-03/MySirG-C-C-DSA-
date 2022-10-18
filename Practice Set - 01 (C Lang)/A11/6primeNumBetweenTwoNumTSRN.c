#include <stdio.h>
void primeBetween(int, int);
int main ()
{
    int a, b;
    printf("enter two numbers : ");
    scanf("%d %d", &a, &b);

    primeBetween(a,b);

    return 0;
}

void primeBetween(int a, int b)
{
    int i,j;
    for (i = a>1?a+1:2 ; i<b ; i++)
    {
        for(j=2; j<=i/2; j++)
        {
            if (i%j==0)
                break;
        }

        if(j>i/2)
            printf("%d\n", i);
    }
}