#include <stdio.h>
int digiCount(int);
int main ()
{
    int n;
    printf("enter : ");
    scanf("%d", &n);

    printf("number of digits in %d is : %d", n, digiCount(n));
    return 0;
}

int digiCount(int n)
{
    if(n<10 && n>-10)
        return 1;
    else
    {
        n /= 10;
        return 1 + digiCount(n);
    }
}