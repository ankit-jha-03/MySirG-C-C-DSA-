#include <stdio.h>
int main ()
{
    int a,b, i;
    printf("enter 2 numbers : ");
    scanf("%d %d", &a, &b);

    for(i= a>b?a:b ; ; i++)               // more optimized than i=1 ??
    {
        if(i%a == 0 && i%b == 0)
            {
                printf("LCM of %d & %d : %d", a,b,i);
                break;
            }
    }
    return 0;
}

// also can use the property :  a*b == LCM*HCF