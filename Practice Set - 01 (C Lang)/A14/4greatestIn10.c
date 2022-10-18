#include <stdio.h>
int main ()
{
    int a[10], i, greatest;

    printf("enter 10 numbers 1 by 1 : ");
    
    greatest = -999999;                 // also can assign -ve infinity (avaliable in math.h)
    
    for(i=1; i<=9; i++)                 // should we use function??
    {
        scanf("%d", &a[i]);
        greatest = greatest>a[i]? greatest:a[i];
    }

    printf("greatest is : %d", greatest);
    
    return 0;
}