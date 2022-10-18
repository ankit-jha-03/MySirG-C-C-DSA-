#include <stdio.h>
int totalAdj (int a[], int);
int main ()
{
    int n, i;
    printf("enter size : ");
    scanf("%d", &n);

    int a[n];

    printf("enter %d numbers : ", n);

    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("total duplicate's value is : %d", totalAdj(a,n));
    
    return 0;
}

int totalAdj (int a[], int n)
{
    int i, j, count = 0;

    for(i=0; i<=n-2; i++)
    {
        for (j=i+1; j<=n-1; j++)        // counting technic
        {
            if(a[i]==a[j])
            {
                count++;
                break;
            }
        }
    }

    return count;
}