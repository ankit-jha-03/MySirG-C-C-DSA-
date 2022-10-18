#include <stdio.h>
int main ()
{
    float a;
    printf("enter a number : ");
    scanf("%f", &a);

    if (a>0)
        printf("its positive");
    else if (a<0)
        printf("its negative");
    else
        printf("its zero");
    return 0;
}