#include <stdio.h>
int comb(int, int);
int fact(int);
int main ()
{
    int n,r;
    printf("total items : ");
    scanf("%d", &n);
    printf("item selected : ");
    scanf("%d", &r);

    printf("number of combinations : %d", comb(n,r));
    return 0;
}

int comb(int n, int r)
{
    return fact(n)/(fact(r)*fact(n-r));
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