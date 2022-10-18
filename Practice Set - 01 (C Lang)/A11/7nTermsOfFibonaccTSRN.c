#include <stdio.h>
void fib(int);
int main ()
{
    int n;
    printf("enter number of terms : ");
    scanf("%d", &n);

    fib(n);

    return 0;
}

void fib (int n)
{
    int a = -1, b = 1, c, i;

    for(i=1; i<=n; i++)
    {
        c = a + b;
        a = b;
        b = c;

        printf("%d\n", c);
    }
}