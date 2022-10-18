#include <stdio.h>
int fact(int);
int main ()
{
    int n;
    printf("enter : ");
    scanf("%d", &n);
    
    // also can write condtion : should be +ve number!

    printf("sum of the digits of %d is : %d", n, fact(n));
    return 0;
}

int fact(int n)
{
    if(n<=1)
        return 1;
    
    return n*fact(n-1);
}