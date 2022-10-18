#include <stdio.h>
float circleArea(float);
int main ()
{
    float r;
    printf("enter redius of the circle : ");
    scanf("%f", &r);

    printf("area of the circle is %.2f", circleArea(r));
    return 0;
}

float circleArea(float r)
{
    return 3.14*r*r;
}