#include <stdio.h>
int main ()
{
    int n, f;
    printf("enter : ");
    scanf("%d", &n);

    for (n, f=1; n>=2; n--)
    {
        f *= n;
    }

    printf("factorial : %d", f);
    return 0;
}