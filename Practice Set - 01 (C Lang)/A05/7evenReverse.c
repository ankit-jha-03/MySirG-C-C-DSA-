#include <stdio.h>
int main ()
{
    int n;
    printf("enter : ");
    scanf("%d", &n);

    for(n; n>=1; n--)
    {
        printf("%d\n", 2*n);
    }
    return 0;
}