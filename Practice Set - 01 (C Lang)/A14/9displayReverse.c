#include <stdio.h>
int main ()
{
    int a[10], i;
    printf("enter 10 numbers : ");

    for (i=0; i<=9; i++)
        scanf("%d", &a[i]);

    printf("numbers in reverse order are : \n");

    for (i=9; i>=0; i--)
        printf("%d\n", a[i]);

    return 0;
}