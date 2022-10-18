#include <stdio.h>
int strcmp(char a[], char b[]);
int main ()
{
    char str1[100], str2[100];
    int d;

    printf("enter the first string : ");
    fgets(str1, 100, stdin);

    printf("enter the second string : ");
    fgets(str2, 100, stdin);

    d = strcmp(str1, str2);

    if (d==1)
        printf("these words are in dictionary order");
    else if (d==-1)
        printf("these words aren't in dictionary order");
    else
        printf("these are same words");

    return 0;
}


int strcmp(char a[], char b[])
{
    int i;

    for(i=0; a[i-1]!=0; i++)
    {
        if(a[i]<b[i])
            return 1;
        else if(a[i]>b[i])
            return -1;
    }
        return 0;
}