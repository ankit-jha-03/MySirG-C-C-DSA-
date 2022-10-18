#include <stdio.h>
int lcm(int, int);
int main ()
{
    int a, b;
    printf("enter two numbers : ");
    scanf("%d %d", &a, &b);

    printf("LCM of %d & %d : %d", a,b,lcm(a,b));
    return 0;
}

int lcm(int a, int b)
{
    int i;
    for(i = a>b?a:b ; ; i++)
    {
        if(i%a==0 && i%b==0)
            break;
    }
    return i;
}