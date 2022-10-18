#include <stdio.h>
#include <string.h>
int main ()
{
    int i, j, k, n;

    printf("enter number of strings to store : ");
    scanf("%d", &n);

    char str[n][50];

    fflush(stdin);
    printf("store %d strings one by one :\n", n);

    for(i=0; i<n; i++)
        fgets(str[i], 50, stdin);

    for (i=0; i<n; i++)
    {
        j = strlen(str[i])-2;
        for(k=0, j; j>k; j--, k++)
        {
            if(str[i][k] != str[i][j])
                break;
        }
        if(k>=j)
            printf("palindrome strings : %s", str[i]);
    }

    return 0;
}