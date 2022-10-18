#include <stdio.h>
int check(int);
int main ()
{
    int n, flag;
    printf("enter a number : ");
    scanf("%d", &n);

    flag = check(n);

    if(flag)
        printf("its even");
    else
        printf("its odd");
    return 0;
}

int check (int a)
{
    if(a%2)
        return 0;
    else
        return 1;
}