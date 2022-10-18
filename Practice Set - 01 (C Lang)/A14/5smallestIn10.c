#include <stdio.h>
int main ()
{
    int a[10], i, smallest;

    printf("enter 10 numbers 1 by 1 : ");

    smallest = 999999;                    // also can assign -ve infinity (avaliable in math.h)
    
    for(i=1; i<=9; i++)                 // should we use function??
    {
        scanf("%d", &a[i]);
        smallest = smallest<a[i]? smallest:a[i];
    }

    printf("smallest is : %d", smallest);
    
    return 0;
}