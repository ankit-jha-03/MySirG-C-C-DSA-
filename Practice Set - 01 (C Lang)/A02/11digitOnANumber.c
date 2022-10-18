#include <stdio.h>
int main ()
{
    int a, b;
    printf("enter a number : ");
    scanf("%d", &a);
    printf("enter the digit : ");
    scanf("%d", &b);

    printf("accordingly, the number will be : %d", a*10+b);

    return 0;
}