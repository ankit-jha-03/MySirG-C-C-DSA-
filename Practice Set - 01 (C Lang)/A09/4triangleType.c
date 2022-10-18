#include <stdio.h>
int main ()
{
    int a,b,c,k;

    printf("enter 1 : to check whether 3 sides belong to a isosceles triangle or not\n");
    printf("enter 2 : to check whether 3 sides belong to a right angle triangle or not\n");
    printf("enter 3 : to check whether 3 sides belong to a equilateral triangle or not\n");
    printf("enter 4 : to exit\n");

    while(1)
    {
        printf("enter number : ");
        scanf("%d", &k);

        switch(k)
        {
            case 1 :
                printf("enter three sides of a triange : ");
                scanf("%d %d %d", &a, &b, &c);

                if (a==b && b==c)
                    printf("yes, these sides belong to a isosceles triangle\n");
                else
                    printf("no, these sides doesn't belongs to isosceles triangle\n");
                break;
            
            case 2 :
                printf("enter three sides of a triange : ");
                scanf("%d %d %d", &a, &b, &c);

                if (a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
                    printf("yes, these sides belong to a right angled triangle\n");
                else
                    printf("no, these sides doesn't belongs to right angled triangle\n");
                break;

            case 3 :
                printf("enter three sides of a triange : ");
                scanf("%d %d %d", &a, &b, &c);

                if (a==b || b==c || c==a)
                    printf("yes, these sides belong to a equilateral triangle\n");
                else
                    printf("no, these sides doesn't belongs to equilateral triangle\n");
                break;

            default :
                printf("invalid input!!\n");

            case 4 :
                break;
        }
        if(k==4)
            break;
    }
    return 0;
}