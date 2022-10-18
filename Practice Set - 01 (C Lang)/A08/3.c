#include <stdio.h>
int main ()
{
    int i,j;
    
    for (i=1; i<=5; i++)
    {
        for (j=1; i+j<=6; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


/* can optimize it... by entering condition in loop
learnt : where space is not persent then optimize the code

        if(i+j<=6)
            printf("*");
        else
            printf(" ");
*/