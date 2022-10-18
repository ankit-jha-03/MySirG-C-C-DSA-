#include <stdio.h>
int hcf(int, int);
int main ()
{
    int a, b;
    printf("enter two numbers : ");
    scanf("%d %d", &a, &b);

    printf("HCF of %d & %d : %d", a,b,hcf(a,b));
    return 0;
}

int hcf(int a, int b)
{
    int i;
    for(i = a<b?a:b ; ; i--)
    {
        if(a%i==0 && b%i==0)
            break;
    }
    return i;
}