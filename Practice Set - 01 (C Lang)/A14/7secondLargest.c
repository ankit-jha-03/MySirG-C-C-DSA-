// sorting will increase time complaxity.

#include <stdio.h>
int main ()
{
    int a[10], i, larg, sLarg;

    printf("enter 10 numbers : ");

    larg = -999999;

    for (i=0; i<=9; i++)
    {
        scanf("%d", &a[i]);

        if(a[i]>larg)
        {
            sLarg = larg;
            larg = a[i];
        }
        else
        {
            sLarg = sLarg>a[i]? sLarg:a[i];
        }
    }

    printf("second largest number is : %d", sLarg);
    
    return 0;
}