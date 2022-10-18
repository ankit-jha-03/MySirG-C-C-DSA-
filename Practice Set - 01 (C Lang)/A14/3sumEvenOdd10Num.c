#include <stdio.h>
int main ()
{
    int a[10], i, sum_even = 0, sum_odd = 0;

    printf("enter 10 numbers 1 by 1 : ");
    
    for(i=0; i<=9; i++)
    {
        scanf("%d", &a[i]);

        if(a[i]%2==0)
            sum_even += a[i];
        else
            sum_odd += a[i];
    }

    printf("sum off even nums=bers : %d\n", sum_even);
    printf("sum off odd nums=bers : %d", sum_odd);
    return 0;
}