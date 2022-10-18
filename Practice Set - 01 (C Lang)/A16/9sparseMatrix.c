// sparse vs dense
#include <stdio.h>
int main ()
{
    int i, j, m, n, count = 0;
    
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

            if (a[i][j]==0)
                count++;
        }
    }

    if (2*count > m*n)
        printf("its sparse matrix");
    else
        printf("its not a spare matrix");
    
    return 0;
}