// original querstion : merge two equal arrays
// modified verstion : merge any two arrays
#include <stdio.h>
int sortDesc (int a[], int);
void mergeDes (int a[], int, int b[], int);
int main ()
{
    // first array
    int m, n, i;
    printf("enter size of first array : ");
    scanf("%d", &m);

    int a[m];

    printf("enter %d numbers : ", m);

    for(i=0; i<m; i++)
        scanf("%d", &a[i]);

    // second array
    printf("enter size of second array : ");
    scanf("%d", &n);

    int b[n];

    printf("enter %d numbers : ", n);

    for(i=0; i<n; i++)
        scanf("%d", &b[i]);

    mergeDes(a,m,b,n);

    return 0;
}

void mergeDes (int a[], int m, int b[], int n)
{
    int i, j, k, temp[m+n];
    sortDesc(a, m), sortDesc(b, n);

    for(i=0, j=0, k = 0; k<=m+n-1; k++)
    {
        if(i==m)                            // most important to understand.
        {
            for ( ; k<=m+n-1; k++, j++)
                temp[k] = b[j];
            break;
        }
        else if(i==m)
        {
            for ( ; k<=m+n-1; k++, j++)
                temp[k] = b[j];
            break;
        }
        else if(a[i]>b[j])
        {
            temp[k]=a[i];
            i++;
        }
        else
        {
            temp[k]=b[j];
            j++;
        }
    }

    for (i=0; i<=m+n-1; i++)
        printf("%d ", temp[i]);                     // don't know how to return an array !!
}

int sortDesc (int a[], int m)
{
    int i, j, temp;

    for (i=0; i<m-1; i++)
    {
        for (j=i+1; j<m; j++)
        {
            if(a[i]<a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}