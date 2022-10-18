#include <stdio.h>
int fact(int);
int main ()
{
    int n, s=0, i=1;
    printf("enter terms : ");
    scanf("%d", &n);

    while(i<=n)
    {
        s += fact(i)/i;
        i++;
    }

    printf("result : %d ",s);
    return 0;
}

int fact(int a)
{
    int fact = 1;
    while(a>1)
    {
        fact *= a;
        a--;
    }
    return fact;
}