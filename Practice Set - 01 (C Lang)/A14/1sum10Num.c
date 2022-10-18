#include <stdio.h>
int main ()
{
    int a[10], i, sum = 0;

    printf("enter 10 numbers 1 by 1 : ");
    
    for(i=0; i<=9; i++)
    {
        scanf("%d", &a[i]);

        sum += a[i];
    }

    printf("sum is : %d", sum);
    return 0;
}