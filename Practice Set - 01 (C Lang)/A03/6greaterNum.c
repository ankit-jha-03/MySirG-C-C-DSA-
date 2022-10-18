#include <stdio.h>
int main ()
{
    float a, b;
    printf("enter two numbers : ");
    scanf("%f %f", &a, &b);

    if(a>=b)
        printf("%.0f is greater", a);
    else
        printf("%.0f is greater", b);
    return 0;
}