#include <stdio.h>      // task : generalize it
int main ()
{
    int i, j;

    for (i=1; i<=3; i++)
    {
        for(j=1; j<=19; j++)
        {
            if((i+j>=4 && j-i<=6) || (i+j>=14 && j-i<=16))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    for (i=1; i<=10; i++)
    {
        for(j=1; j<=19; j++)
        {
            if (i==1 && j==7)
            {
                printf("MySirG");
                j=13;
            }
            if(j>=i && i+j<=20)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}