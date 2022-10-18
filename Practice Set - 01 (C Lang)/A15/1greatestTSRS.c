#include <stdio.h>
int greatest(int a[], int);
int main ()
{
    int n, i;
    printf("enter size : ");
    scanf("%d", &n);

    int a[n];

    printf("enter %d numbers : ", n);

    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("greatest number is : %d", greatest(a,n));

    return 0;
}

int greatest(int a[], int n)
{
    int i, greatest;
    greatest = -999999;

    for(i=0; i<n; i++)
        greatest = greatest>a[i]? greatest:a[i];

    return greatest;
}