#include <stdio.h>
int main ()
{
    float a, b, c;
    printf("enter three sides of the triangle :\n");
    scanf("%f %f %f", &a, &b, &c);

    if (a+b>c && b+c>a && a+c>b)
        printf("its a valid triangle");
    else
        printf("its not a valid triangle");
    return 0;
}