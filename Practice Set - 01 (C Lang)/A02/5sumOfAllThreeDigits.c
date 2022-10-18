#include <stdio.h>
int main ()
{
    int a, b;
    printf("enter a three digit number : ");
    scanf("%d", &a);

    b = a%10;
    a = a/10;
    b += a%10;
    a = a/10;
    b += a;

    printf("sum of digits of this number is %d", b);

    return 0;
}