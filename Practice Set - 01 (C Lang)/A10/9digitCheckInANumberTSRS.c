#include <stdio.h>
int check(int, int);
int main ()
{
    int n, d;
    printf("enter number : ");
    scanf("%d", &n);
    printf("enter digit to search : ");
    scanf("%d", &d);

    int c = check(n,d);

    if (c)
        printf("yes, the digit %d is avaliable in %d", d, n);
    else
        printf("no, the digit %d isn't avaliable in %d", d, n);

    return 0;
}

int check(int n, int d)
{
    for(n ; n>0 ; n=n/10)
    {
        if(n%10==d)
            return 1;
    }
    return 0;
}