#include <stdio.h>
int main ()
{
    float a;
    printf("enter a number : ");
    scanf("%f", &a);

    if(a>0)
        printf("its +ve");
    else
        printf("its non +ve");
    return 0;
}