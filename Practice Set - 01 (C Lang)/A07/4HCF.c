#include <stdio.h>
int main ()
{
    int i,a,b;
    printf("enter two numbers : ");
    scanf("%d %d", &a, &b);

    for (i = a>b?b:a ; ;i--)
    {
        if (a%i == 0 && b%i == 0)
        {
            printf("HCF of %d & %d : %d", a,b,i);
            break;
        }
    }
    
    return 0;
}