// sorting will increase time complaxity.

#include <stdio.h>
int main ()
{
    int a[10], i, smallest, secSmallest;

    printf("enter 10 numbers : ");

    smallest = 999999;

    for (i=0; i<=9; i++)
    {
        scanf("%d", &a[i]);

        if(a[i]<smallest)
        {
            secSmallest = smallest;
            smallest = a[i];
        }
        else
        {
            secSmallest = secSmallest<a[i]? secSmallest:a[i];
        }
    }

    printf("second smallestest number is : %d", secSmallest);
    
    return 0;
}