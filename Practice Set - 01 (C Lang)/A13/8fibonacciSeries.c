#include <stdio.h>
int fib(int);
int main ()
{
    int n,i;
    printf("enter : ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
        printf("%d\n", fib(i));

    return 0;
}

int fib(int n)
{
    if (n==1)
        return 0;
    if (n==2)
        return 1;

    return fib(n-1) + fib(n-2);
}




/* need two var a=-1 & b=1..

int fib(int n, int a, int b)
{
    int c = a+b;

    if(n>0)
    {
        printf("%d\n",c);
        a=b;
        b=c;
        fib(--n, a,b);
    }
}
*/