#include <stdio.h>
void reverse(int*, int);
int main ()
{
    int i, n;
    printf("enter the numbers of elements : ");
    scanf("%d", &n);

    int a[n];

    for (i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    reverse(a, n);

    return 0;
}

void reverse (int *p, int n)
{
    int i;

    for(i=n-1; i>=0; i--)
    {
        printf("%d ", p[i]);
    }
}