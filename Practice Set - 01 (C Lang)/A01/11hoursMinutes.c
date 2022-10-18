#include <stdio.h>
int main ()
{
    int h, m;
    printf("enter time in HH:MM format\n");
    scanf("%d:%d", &h, &m);

    printf("%d Hour and %d Minutes", h,m);
    return 0;
}