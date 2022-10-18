#include <stdio.h>
void sort (int*, int);
int main ()
{
    int i, n;
    printf("enter size of array : ");
    scanf("%d", &n);

    int a[n];

    printf("enter %d numbers 1 by 1 : ", n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    
    sort(a, n);

    for(i=0; i<n; i++)
        printf("%d ", a[i]);

    return 0;
}

void sort (int *a, int n)
{
    int i, j, temp;

    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {   
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}