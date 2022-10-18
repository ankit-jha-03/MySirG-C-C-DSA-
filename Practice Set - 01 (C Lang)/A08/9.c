#include <stdio.h>
int main ()
{
    int i,j,k;
    
    for (i=1; i<=4; i++)
    {
        k=1;

        for (j=1; j<=7; j++)
        {
            if(j>=i && i+j<=8)
            {
                printf("%d",k);
                j<4 ? k++ : k-- ;
            }

            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}