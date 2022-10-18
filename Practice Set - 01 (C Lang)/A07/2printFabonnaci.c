#include <stdio.h>
int main ()
{
    int a = -1, b = 1, c, n, i;
    printf("enter : ");
    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        c = a + b;
        printf("%d\n", c);
        a = b;
        b = c;
    }
    return 0;
}

/*
    int i, n, a=-1, b=1;
    printf("enter : ");
    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        if (i%2)
        {
            a += b;
            printf("%d\n", a);
        }
        else
        {
            b += a;
            printf("%d\n", b);
        } 
    }
*/