#include <stdio.h>
int main ()
{
    int i, n;

    printf("enter number of strings to store : ");
    scanf("%d", &n);

    char str[n][50];

    fflush(stdin);

    for(i=0; i<n; i++)
    {
        printf("enter %ds string : ", i+1);
        fgets(str[i], 50, stdin);
    }

    for(i=0; i<n; i++)
        printf("%s", str[i]);

    return 0;
}