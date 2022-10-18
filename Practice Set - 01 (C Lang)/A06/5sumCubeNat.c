#include <stdio.h>
int main ()
{
    int n, s;
    printf("enter : ");
    scanf("%d", &n);

    for (n, s=0; n>=1; n--)
    {
        s += n*n*n;
    }

    printf("sum : %d", s);
    return 0;
}