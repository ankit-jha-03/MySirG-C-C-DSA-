#include <stdio.h>
int main ()
{
    int n, r;
    printf("enter : ");
    scanf("%d", &n);

    for(r=0; n!=0; n/=10)
    {
        r *= 10;
        r += n%10;
    }

    printf("reversed : %d", r);
    return 0;
}