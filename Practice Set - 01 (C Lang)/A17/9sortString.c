#include <stdio.h>
#include <string.h>
void sort(char a[]);
int main ()
{
    char str[100];
    
    printf("enter string : ");
    fgets(str, 100, stdin);
    
    sort(str);

    printf("sorted string : %s", str);
    return 0;
}

void sort (char a[])
{
    int i, j, n, temp;

    n = strlen(a)-2;    // -1 for 0 & 1 diffrenet and -1 for removing enter key

    for (i=0; i<n; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    a[j] = 0;
}