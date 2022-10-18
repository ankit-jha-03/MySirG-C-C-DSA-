#include <stdio.h>
int arrang(int, int);
int fact(int);
int main ()
{
    int n,r;
    printf("total items : ");
    scanf("%d", &n);
    printf("item selected : ");
    scanf("%d", &r);

    printf("number of arrangment : %d", arrang(n,r));
    return 0;
}

int arrang(int n, int r)
{
    return fact(n)/fact(n-r);
}

int fact(int n)
{
    int fact = 1;
    while(n>1)
    {
        fact *= n;
        n--;
    }
    return fact;
}