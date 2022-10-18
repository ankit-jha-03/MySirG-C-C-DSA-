#include <stdio.h>
int firstAdj (int a[], int);
int main ()
{
    int n, i, value;
    printf("enter size : ");
    scanf("%d", &n);

    int a[n];

    printf("enter %d numbers : ", n);

    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    value = firstAdj(a,n);

    if(value==999999)
        printf("there is no adjecent duplicate");
    else
        printf("first adjecent duplicate's value is : %d", value);
    
    return 0;
}

int firstAdj (int a[], int n)
{
    int i;

    for(i=0; i<=n-2; i++)
    {
        if(a[i]==a[i+1])
            return a[i];
    }

    return 999999;
}