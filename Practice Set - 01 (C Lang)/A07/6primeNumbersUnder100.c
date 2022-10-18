#include <stdio.h>
int main ()
{
    int i, j;                       // can use flag as well

    for (i=2; i<=100 ;i++)
    {
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
                break;
        }
        if(j>i/2)
            printf("%d\n", i);
    }
    
    return 0;
}