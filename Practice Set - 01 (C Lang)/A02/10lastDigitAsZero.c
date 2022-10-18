#include <stdio.h>
int main ()
{
    int a;
    printf("enter a number : ");
    scanf("%d", &a);

    a /= 10;
    a *= 10;

    printf("accordingly, the new number will be : %d", a);
    return 0;
}