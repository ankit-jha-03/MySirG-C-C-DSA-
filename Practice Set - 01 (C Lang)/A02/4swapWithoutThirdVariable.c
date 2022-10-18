#include <stdio.h>
int main ()
{
    int a, b;
    printf("enter two numers 'a' and 'b' : ");
    scanf("%d %d", &a, &b);

    a += b;
    b = a-b;
    a -= b;

    printf("now, the number 'a' is %d\n,and the number 'b' is %d", a,b);
    return 0;
}