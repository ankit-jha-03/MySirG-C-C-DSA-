#include <stdio.h>
int main ()
{
    int i, j;

    for (i=1; i<=5; i++)
    {
        for (j=1; j<=9; j++)
        {
            if(i==j || i+j==10 || i==1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}