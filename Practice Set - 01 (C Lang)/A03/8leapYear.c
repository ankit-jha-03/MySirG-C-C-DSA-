#include <stdio.h>
int main ()
{
    int a;
    printf("enter a year : ");
    scanf("%d", &a);

    if (a%100==0)
    {
        if (a%400)
            printf("its a leap year");
        else
            printf("its not a leap year");
    }

    else
    {
        if (a%4)
            printf("its a leap year");
        else
            printf("its not a leap year");
    }
    return 0;
}

/*  Not Efficient
    if(a%4==0)
    {
        if(a%100==0 && a%400!=0)
            printf("its not a leap year");
        else
            printf("its a leap year");
    }
    else
        printf("its not a leap year");
*/