#include <stdio.h>
int sum(int*, int);
int main ()
{
    int i, n;
    printf("enter the numbers of elements : ");
    scanf("%d", &n);

    int a[n];

    for (i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("sum of all elemetens : %d", sum(a, n));

    return 0;
}

int sum (int *p, int n)
{
    int i, sum = 0;

    for(i=0; i<n; i++)
    {
        sum += p[i];
    }

    return sum;
}