#include <stdio.h>
int main ()
{
    int a;
    printf("enter a number : ");
    scanf("%d", &a);

    printf("unit digit of the number %d is %d", a, a%10);
    return 0;
}