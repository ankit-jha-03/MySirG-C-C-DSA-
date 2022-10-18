#include <stdio.h>
float SI(float, float, int);
int main ()
{
    float a, i;
    int y;
    printf("enter amount : ");
    scanf("%f", &a);
    printf("enter interest rate : ");
    scanf("%f", &i);
    printf("enter years : ");
    scanf("%d", &y);

    printf("simple interest will be %.2f", SI(a,i,y));
    return 0;
}

float SI(float a, float b, int c)
{
    return a*b*c/100;
}