#include <stdio.h>
int main ()
{
    int a,b,c,d,e;
    printf("enter ur marks of all 5 subjects :\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if (a>32 && b>32 && c>32 && d>32 && e>32)
        printf("congrats!!, you passed");
    else
        printf("sorry, you failed");
    return 0;
}