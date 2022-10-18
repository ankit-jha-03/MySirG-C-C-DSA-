#include <stdio.h>
int main ()
{
    int a;
    printf("enter a number : ");
    scanf("%d", &a);

    if (a%2==0 && a%3==0)
        printf("this number is divisible by 2 & 3");
    else
        printf("this number is not divisible by 2 or 3 or both");
    return 0;
}