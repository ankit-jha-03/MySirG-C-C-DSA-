#include <stdio.h>
int main ()
{
    int n;
    printf("enter any number : ");
    scanf("%d", &n);

    switch (n%2)
    {
        case 1 :
            printf("its odd number");
            break;
        case 0 :
            printf("its evem number\n");
            printf("nearest odd is : %d", n+1);
    }
    return 0;
}