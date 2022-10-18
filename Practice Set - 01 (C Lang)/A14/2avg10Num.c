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

    printf("avg is : %.2f", sum/10.0);
    return 0;
}