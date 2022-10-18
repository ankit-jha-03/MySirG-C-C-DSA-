#include <stdio.h>
void evenNat(int);
int main ()
{
    int n;
    printf("enter : ");
    scanf("%d", &n);

    evenNat(n);
    return 0;
}

void evenNat(int n)
{
    if(n>=1)
    {
        evenNat(n-1);
        printf("%d\n", 2*n);
    }
}