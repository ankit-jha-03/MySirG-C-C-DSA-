#include <stdio.h>
void printNat(int);
int main ()
{
    int n;
    printf("enter : ");
    scanf("%d", &n);

    printNat(n);
    return 0;
}

void printNat(int n)
{
    if(n>=1)
    {
        printNat(n-1);
        printf("%d\n", n);
    }
}