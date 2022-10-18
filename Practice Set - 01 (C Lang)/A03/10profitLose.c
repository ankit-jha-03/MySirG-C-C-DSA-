#include <stdio.h>
int main ()
{
    float cp, sp, pr;
    printf("enter the cost price : ");
    scanf("%f", &cp);
    printf("enter the selling price : ");
    scanf("%f", &sp);

    if(cp<=sp)
        printf("you make a profit of %.2f%%", (cp-sp)*100);
    else
        printf("you make a loss of %.2f%%", (sp-cp)*100);
    return 0;
}

/*
    pr = sp - cp;

    if(pr>=0)
        printf("you have a profit of %.2f%%", pr/cp*100);
    else
        printf("you have a loss of %.2f%%", pr/cp*100);
*/