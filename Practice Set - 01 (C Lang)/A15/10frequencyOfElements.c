#include <stdio.h>
void freqElements (int a[], int, int);
int main ()
{
    int n, i, m;
    printf("enter size : ");
    scanf("%d", &n);

    int a[n];

    do
    {
        printf("numbers shoul be from 0 to __ : ");
        scanf("%d", &m);
    } while(m<0);

    printf("enter %d numbers : ", n);

    for(i=0; i<n; i++)
    {
        do
        {
            scanf("%d", &a[i]);
        } while (a[i]<0 || a[i]>m);
    }

    freqElements(a,n,m);
    
    return 0;
}

// by hashing method
void freqElements (int a[], int n, int m)
{
    int i, j, freq[99999] = {0};            // space complixity increases, should be a way to initialise variabe array.

    for(i=0; i<n; i++)
        freq[a[i]]++;

    for (i=0; i<=m; i++)
    {
        if(freq[i]>0)
            printf("No. of %ds : %d\n", i, freq[i]);
    }
}


// for(i=0; i<n; i++)
//     {
//         freq[i] = 0;
//         for(j=0; j<n; j++)
//         {
//             if(i==a[j])
            
//                 freq[i]++;
            
//         }
//     }