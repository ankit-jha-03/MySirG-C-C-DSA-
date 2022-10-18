#include <stdio.h>
void natRev(int);
int main ()
{
    int n;
    printf("enter : ");
    scanf("%d", &n);

    natRev(n);
    return 0;
}

void natRev(int n)
{
    if(n>=1)
    {
        printf("%d\n", n);
        natRev(n-1);
    }
}