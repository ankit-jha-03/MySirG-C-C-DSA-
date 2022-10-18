// was to hard to understand so just copy pasted for now... will try again after understanding pointers
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int IPCheck (char *a);
int invalidDigit(char *a);
int main ()
{
    int i, j, k, n=1, mistake = 0;

    printf("enter number of IP Addresses to store : ");
    scanf("%d", &n);

    char str[n][20], temp[20];

    fflush(stdin);
    printf("store %d IP Adresses one by one :\n", n);

    for(i=0; i<n; i++)
        gets(str[i]);

    for (i=0; i<n; i++)
    {
        strcpy(temp, str[i]);

        if(IPCheck(str[i]))
        {
            if (mistake == 0)
                printf("incorrect IP Addresses are : \n");

            printf("%s\n", temp);
            mistake = 1;
        }
    }

    if(mistake == 0)
        printf("there isn't any incorrect IP Addresses");

    return 0;
}

int IPCheck (char *a)
{
    int i, num, dots = 0;
    char* ptr;

    if (a == NULL)
        return 1;

    ptr = strtok(a, ".");

    if (ptr == NULL)
        return 1;

    while (ptr)
    {
        if (invalidDigit(ptr))
            return 1;

        num = atoi(ptr);

        if (num >= 0 && num <= 255) 
        {
            ptr = strtok(NULL, ".");

            if (ptr != NULL)
                ++dots;
        }
        else
            return 1;
    }

    if (dots == 3)
        return 0;

    return 1;
}

int invalidDigit (char *a)
{
    while (*a) 
    {
        if (*a >= '0' && *a <= '9')
            ++a;
        else
            return 1;
    }
    return 0;
}

/*
    int i, t;
    char a2[] = {0}, temp[] = {0}, *portion;
    strcpy(a2, a);
    int dot = 0;

    printf("%d\n", dot);

    portion = &a2;

    while(portion != 0)
    {
        if(temp[0] == 0)
            strcpy(temp, strtok(a2, "."));
        else
            strcpy(temp, strtok(NULL, "."));

        printf("%d\n", dot);

        if(digiCheck(temp))
            return 1;

        dot++;

        printf("%d\n", dot);





    printf("%s\n", a);
    int i, n = 0;

    for(i=0; a[i]; i++)
    {
        if(a[i]<'0' || a[i]>'9')
            return 1;
        
        n *= 10;
        n += a[i]-48;
    }

    if(n>=256)
        return 1;
        
    return 0;
*/