#include <stdio.h>
int main ()
{
    int n, i;
    printf("enter : ");
    scanf("%d", &n);

    for (i=1; n>10; i++)
    {
        n /= 10;

    }

    printf("digits : %d", i);
    return 0;
}