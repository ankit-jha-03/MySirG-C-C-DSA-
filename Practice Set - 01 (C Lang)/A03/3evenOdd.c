#include <stdio.h>
int main ()
{
    float a;
    printf("enter a number : ");
    scanf("%f", &a);

    int b = a;

    if(a==b)
    {
        if(b%2==0)
            printf("its even");
        else
            printf("its odd");
    }
    else
        printf("its odd");
    return 0;
}