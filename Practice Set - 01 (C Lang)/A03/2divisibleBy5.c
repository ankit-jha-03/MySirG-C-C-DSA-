#include <stdio.h>
int main ()
{
    float a;
    printf("enter a number : ");
    scanf("%f", &a);
    
    int  b = a;

    if (b==a)
    {
        if(b%5==0)
            printf("its divisible by 5");
        else
            printf("its not divisible by 5");
    }
    else
        printf("its not divisible by 5");
    return 0;
}