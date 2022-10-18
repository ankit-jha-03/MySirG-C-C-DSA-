#include <stdio.h>
int main ()
{
    int a,b,c;
    printf("enter two number 'a' and 'b' : ");
    scanf("%d %d", &a,&b);

    c = a;
    a = b;
    b = a;

    printf("now, the number 'a' = %d\nand the number 'b' = %d", a,b);
    return 0;
}