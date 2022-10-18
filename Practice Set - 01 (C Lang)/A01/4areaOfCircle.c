#include <stdio.h>
int main ()
{
    float r;
    printf("enter redius of the circle : ");
    scanf("%f", &r);

    printf("Area of circle is %.3f having the radius %.2f", r*r*3.14, r);
    return 0;
}