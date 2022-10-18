#include <stdio.h>
int main ()
{
    int n;
    
    for(n=1; n<=10; n++)
    {
        printf("%d\n", 2*n-1);
    }
    return 0;
}

/*  had to think more than....
    for(n=1; n<20; n+=2)
    {
        printf("%d", n);
    }
*/