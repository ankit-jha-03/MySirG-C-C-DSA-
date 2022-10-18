#include <stdio.h>
int main ()
{
    int b = -1, a = 1, c, n, i;
    printf("enter : ");
    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        c = b + a;
        b = a;
        a = c;
    }

    printf("fabonnaci term : %d", c);
    return 0;
}

/*
    int n, i, a = 0, b = 1;
    printf("enter : ");
    scanf("%d", &n);
    

    for (i=3 ;i<=n ;i++)
    {
        if(i%2)
        {
            a += b;
        }
        else
        {
            b += a;
        }
    }

    if(n%2)
        printf("fabonnaci term : %d", a);
    else
        printf("fabonnaci term : %d", b);
            
    return 0;
*/