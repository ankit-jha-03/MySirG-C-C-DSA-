#include <stdio.h>
int main ()
{
    int a[10], b[10], i;
    printf("enter 10 numbers : ");

    for (i=0; i<=9; i++)
        scanf("%d", &a[i]);

    for (i=0; i<=9; i++)
        b[i]=a[i];

    printf("copied values in second arrays is : \n");
    for (i=0; i<=9; i++)
        printf("%d\n", b[i]);
        
    return 0;
}