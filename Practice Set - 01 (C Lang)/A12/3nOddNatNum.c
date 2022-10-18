#include <stdio.h>
void oddNat(int);
int main ()
{
    int n;
    printf("enter : ");
    scanf("%d", &n);

    oddNat(n);
    return 0;
}

void oddNat(int n)
{
    if(n>=1)
    {
        oddNat(n-1);
        printf("%d\n", 2*n-1);
    }
}