#include <stdio.h>
int smallest(int a[], int);
int main ()
{
    int n, i;
    printf("enter size : ");
    scanf("%d", &n);

    int a[n];

    printf("enter %d numbers : ", n);

    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("smallest number is : %d", smallest(a,n));

    return 0;
}

int smallest(int a[], int n)
{
    int i, smallest;
    smallest = 999999;

    for(i=0; i<n; i++)
        smallest = smallest<a[i]? smallest:a[i];

    return smallest;
}