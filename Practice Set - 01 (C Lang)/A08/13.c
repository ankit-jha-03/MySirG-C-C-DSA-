#include <stdio.h>
int main ()
{
    int i, j;
    char k;

    for (i=1; i<=7; i++)
    {
        k = 'A';

        for(j=1; j<=13; j++)
        {
            if (i+j<=8 || j-i>=6)
            {
                printf("%c", k);
                j<7 ? k++ : k-- ;
            }
            else
            {
                printf(" ");
                j<7 ? k++ : k-- ;
            }
                
        }
        printf("\n");
    }
    return 0;
}