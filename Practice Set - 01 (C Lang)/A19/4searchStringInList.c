#include <stdio.h>
#include <string.h>
int main ()
{
    int i, n;

    printf("enter number of strings to store : ");
    scanf("%d", &n);

    char str[n][50], search[50];

    fflush(stdin);
    printf("store %d strings one by one :\n", n);

    for(i=0; i<n; i++)
        fgets(str[i], 50, stdin);

    printf("enter the string to search : ");
    fgets(search, 50, stdin);

    for (i=0; i<n; i++)
    {
        if(strcmp(str[i], search)==0)
        {
            printf("string found");
            break;
        }
    }

    if(i==n)
        printf("string doesn't found");

    return 0;
}