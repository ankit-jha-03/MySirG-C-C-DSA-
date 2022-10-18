#include <stdio.h>
int main ()
{
    int a;
    printf("enter a number : ");
    scanf("%d", &a);

    printf("number without last digit is %d", a/10);
    return 0;
}