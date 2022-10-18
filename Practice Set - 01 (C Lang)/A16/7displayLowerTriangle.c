#include <stdio.h>
int main ()
{
    int i, j, n, sum = 0;
    
    printf("enter no. of raw & coulum in square matrix : ");
    scanf("%d", &n);

    int a[n][n];

    printf("enter the first matrix : ");

    for(i=0; i<n; i++)
    {
        printf("\nenter %d row : ", i+1);
        for(j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            if(j<=i)
                printf("%d ", a[i][j]);
            else
                printf("0 ");
        }
        printf("\n");
    }

    return 0;
}