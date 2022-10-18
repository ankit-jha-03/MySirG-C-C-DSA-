#include <stdio.h>
void reverse (int a[], int);
int main ()
{
    int n, i;
    printf("enter size : ");
    scanf("%d", &n);

    int a[n];

    printf("enter %d numbers : ", n);

    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    reverse(a,n);

    return 0;
}

void reverse (int a[], int n)
{
    int i;

    for(i=n-1; i>=0; i--)
    {
        printf("%d ", a[i]);
    }
}