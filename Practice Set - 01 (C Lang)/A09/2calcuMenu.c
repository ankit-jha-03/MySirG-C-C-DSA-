#include <stdio.h>
int main ()
{
    int k;
    float a, b;           
    
    printf("to addition : 1\n");
    printf("to subsraction : 2\n");
    printf("to multicplication : 3\n");
    printf("to division : 4\n");
    printf("to exit : 5\n");
    
    while(1)
    {
        printf("\nenter the number (1-5) : ");
        scanf("%d", &k);
        
        switch(k)
        {
            case 1 :
                printf("enter two numbers : ");
                scanf("%f %f", &a, &b);
                printf("addition is : %.2f\n", a+b);
                break;

            case 2 :
                printf("enter two numbers : ");
                scanf("%f %f", &a, &b);
                printf("substraction is : %.2f\n", a-b);
                break;

            case 3 :
                printf("enter two numbers : ");
                scanf("%f %f", &a, &b);
                printf("mulultiplication is : %.2f\n", a*b);
                break;

            case 4 :
                printf("enter two numbers : ");
                scanf("%f %f", &a, &b);
                printf("sum is : %.2f\n", a/b);
                break;

            default :
                printf("invalid operation!!\n");
                break;

            case 5 :
                break;
        }
        
        if (k==5)
            break;
    }
    return 0;
}