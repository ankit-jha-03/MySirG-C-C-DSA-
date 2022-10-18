#include <stdio.h>
int main ()
{
    int a;
    printf("enter a number : ");
    scanf("%d", &a);

    if(a>99 && a<1000)
        printf("its a three digit number");
    else
        printf("its not a three digit number");
    return 0;
}