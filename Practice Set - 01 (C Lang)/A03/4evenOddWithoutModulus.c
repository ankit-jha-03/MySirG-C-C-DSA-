#include <stdio.h>
int main ()
{
    float a;
    printf("enter a number : ");
    scanf("%f", &a);

    int b = a/2;

    if(a==b*2)
        printf("its even");
    else
        printf("its odd");
    return 0;
}

/*  Using Bitwise Operator (more efficient)

    int a;
    printf("enter a number : ");
    scanf("%d", &a);

    if((a&1)==0)
        printf("its even");
    else
        printf("its odd");
    return 0;
    
*/