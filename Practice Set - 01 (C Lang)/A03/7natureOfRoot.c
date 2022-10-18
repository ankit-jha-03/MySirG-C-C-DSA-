#include <stdio.h>
int main ()
{
    float a, b, c, d;
    printf("enter value of a,b,c as (ax^2+bx+c=0) : ");
    scanf("%f %f %f", &a, &b , &c);

    printf("roots of the %dx^2+%dx+c=0 is : ", a,b,c);

    d = b*b-4*a*c;

    if(d>=0)
    {
        printf("Real &");
        if(d==0)
            printf(" Equal");
        else
            printf(" Distict");
    }
    else
    {
        printf("Imaginary");
    }
    
    return 0;
}