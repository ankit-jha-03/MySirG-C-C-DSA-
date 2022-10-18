#include <stdio.h>
int main ()
{
    int a, count;
    printf("enter a number : ");
    scanf("%d", &a);

    for(count = 1; a != 0; count++)
    {
        if (a&1)
        {
            printf("%d", count);
            break;
        }
        
        a = a>>1;
    }
    return 0;
}