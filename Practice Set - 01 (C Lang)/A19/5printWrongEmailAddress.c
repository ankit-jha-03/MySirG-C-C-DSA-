#include <stdio.h>
#include <string.h>
int main ()
{
    int i, n, mistake = 0;

    printf("enter number of emails to check : ");
    scanf("%d", &n);

    char str[n][50];

    fflush(stdin);
    printf("store %d emails one by one :\n", n);

    for(i=0; i<n; i++)
        fgets(str[i], 50, stdin);

    for (i=0; i<n; i++)
    {
        if(strchr(str[i], '@')==0)
        {
            if (mistake == 0)
                printf("incorrect emails are : \n");

            printf("%s", str[i]);
            mistake = 1;
        }
    }

    if(mistake == 0)
        printf("there isn't any incorrect email");

    return 0;
}