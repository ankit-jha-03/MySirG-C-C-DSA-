#include <stdio.h>
void num(int);
int main ()
{
    int n;
    printf("enter : ");
    scanf("%d", &n);

    num(n);
    return 0;
}


void num(int n)
{
    int i=1;
    while(i<=n)
    {
        printf("%d\n", i);
        i++;
    }
}