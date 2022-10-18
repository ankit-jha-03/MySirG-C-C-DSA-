#include <stdio.h>
int main ()
{
    int a,b,c;
    printf("enter any 3 numbers : ");
    scanf("%d %d %d", &a, &b, &c);

    // printf("%d is greatest", a>b? a>c?a:c : b>c?b:c);  //(shorteset)

    if(a>b)
        a>c? printf("%d is greatest", a) : printf("%d is greatest", c);
    else
        b>c? printf("%d is greatest", b) : printf("%d is greatest", c);
    return 0;
}

/*  Not Efficient

    if(a>=b && a>=c)
        printf("%d is greatest", a);
    else if(b>=a && b>=c)
        printf("%d is greatest", b);
    else
        printf("%d is greatest", c);
*/