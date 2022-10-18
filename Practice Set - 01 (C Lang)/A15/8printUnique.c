#include <stdio.h>
void unique (int a[], int);
int main ()
{
    int n, i;
    printf("enter size : ");
    scanf("%d", &n);

    int a[n];

    printf("enter %d numbers : ", n);

    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    unique(a,n);
    
    return 0;
}

// can use hashing but it will increase space complaxity
void unique (int a[], int n)
{
    int i, j, count = 0;

    for(i=0; i<=n-1; i++)
    {
        for (j=0; j<n; j++)
        {
            if(a[i]==a[j] && i!=j)
                break;
        }

        if(j==n)
            printf("%d ", a[i]);
    }
}