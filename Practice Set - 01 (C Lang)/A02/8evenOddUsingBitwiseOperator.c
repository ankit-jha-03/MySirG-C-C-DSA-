#include <stdio.h>
int main ()
{
    int a;
    printf("enter a number : ");
    scanf("%d", &a);

    if((a&1)==0)
        printf("its even");
    else
        printf("its odd");
    return 0;
}