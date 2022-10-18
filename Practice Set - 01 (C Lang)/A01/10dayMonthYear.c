#include <stdio.h>
int main ()
{
    int d, m, y;
    printf("enter date in DD/MM/YY format\n");
    scanf("%d/%d/%d", &d, &m, &y);

    printf("day - %d, month - %d, year - %d", d,m,y);
    return 0;
}