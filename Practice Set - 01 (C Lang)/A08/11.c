#include <stdio.h>
int main ()
{
    int i, j;
    char k;

    for (i=1; i<=5; i++)
    {
        k='A';

        for (j=1; j<=9; j++)
        {
            if (i+j>=6 && j-i<=4)
            {
                printf("%c", k);
                j<5 ? k++ : k-- ;
            }
            else                        // instead can use logic for spaces also...
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}