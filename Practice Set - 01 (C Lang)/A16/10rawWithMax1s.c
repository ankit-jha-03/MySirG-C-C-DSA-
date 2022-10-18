// sparse vs dense
#include <stdio.h>
int max (int a[], int);
int main ()
{
    int i, j, m, n;
    
    printf("enter no. of coulumn in matrix : ");
    scanf("%d", &m);
    printf("enter no. of raw in matrix : ");
    scanf("%d", &n);

    int a[m][n];
    int count[n];

    printf("enter the first matrix : ");

    for(i=0; i<m; i++)
    {
        count[i] = 0;
        printf("\nenter %d row : ", i+1);
        for(j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);

            if (a[i][j]==1)
                count[i]++;
        }
    }

    printf("max no. of 1s are avaliable in %ds raw", max(count,n)+1);
    
    return 0;
}

int max (int a[], int n)
{
    int i, greatest = -999999;

    for (i=0; i<n; i++)
        greatest = a[i]>greatest? a[i]:greatest;

    for (i=0; i<n; i++)                         // should try to optimize returning step...
    {
        if(greatest == a[i])
            return i;
    }
}