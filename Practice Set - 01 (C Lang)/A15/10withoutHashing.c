#include <stdio.h>
void freqElements (int a[], int);
int main ()
{
    int n, i;
    printf("enter size : ");
    scanf("%d", &n);

    int a[n];

    printf("enter %d numbers : ", n);

    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    freqElements(a,n);
    
    return 0;
}

void freqElements (int a[], int n)
{
    int i, j, freq[50]={0};

    for (i=0; i<n; i++)
    {
        if(freq[i]!=-1)
        {
            freq[i] = 1;

            for (j=i+1; j<n; j++)
            {
                if(a[i]==a[j])
                {
                    freq[i]++;
                    freq[j]=-1;
                }
            }
        }
    }

    for (i=0; i<n; i++)
    {
        if (freq[i]>0)
            printf("No. of %ds : %d\n", a[i], freq[i]);
    }
}