#include <stdio.h>
void binary(int);
int main ()
{
    int n;
    printf("enter : ");
    scanf("%d", &n);

    binary(n);
    return 0;
}

// -ve number can't be solve by any of 2 methods.

void binary(int n)
{
    if(n!=0)                    
    {
        binary(n/2);
        printf("%d", n%2);
    }
}


/* its looks better

void binary(int n)
{
    if (n!=0)
        binary(n>>1);

    printf("%d", n&1);
}
*/