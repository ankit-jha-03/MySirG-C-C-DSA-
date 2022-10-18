#include <stdio.h>
int main ()
{
    int a;
    printf("enter a number : ");
    scanf("%d", &a);

    if (a%3==0 && a%7==0)
        printf("its divisible by 3 and 7");
    else
        printf("its either divisible by only 3 or only 7 or non of these");
    return 0;
}