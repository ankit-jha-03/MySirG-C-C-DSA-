#include <stdio.h>
void reverse(int);
int main ()
{
    int n;
    printf("enter : ");
    scanf("%d", &n);

    reverse(n);
    return 0;
}

void reverse(int n)
{
    if(n>0)
    {
        printf("%d", n%10);
        reverse(n/10);
    }
}