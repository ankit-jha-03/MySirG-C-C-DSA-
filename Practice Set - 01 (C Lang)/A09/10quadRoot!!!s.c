#include <stdio.h>
#include <math.h>
int main ()
{
    float a, b, c, D;
    printf("enter a,b & c as (ax^2+bx+c=0) : \n");
    scanf("%f %f %f", &a, &b, &c);

    D = b*b - 4*a*c;

    switch(D>=0)
    {
        case 1 :
            switch(D==0)
            {
                case 1 :
                    printf("roots : %.2f  &  %.2f", -b/(2*a), -b/(2*a));
                    break;

                default :
                    printf("roots : %.2f  &  %.2f", (-b+sqrt(D))/(2*a),(-b-sqrt(D))/(2*a));
            }
            break;

        default :
            printf("roots : %.2f+%.2fi  &  %.2f-%.2fi", -b/(2*a),sqrt(-D),-b/(2*a),sqrt(-D));
    }
    return 0;
}