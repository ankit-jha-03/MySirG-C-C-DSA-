#include <stdio.h>
int main ()
{
    int i, j, m, n;
    
    printf("enter no. of coulumn in matrix : ");
    scanf("%d", &m);
    printf("enter no. of raw in matrix : ");
    scanf("%d", &n);

    int a[m][n];

    printf("enter the first matrix : ");

    for(i=0; i<m; i++)
    {
        printf("\nenter %d row : ", i+1);
        for(j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}