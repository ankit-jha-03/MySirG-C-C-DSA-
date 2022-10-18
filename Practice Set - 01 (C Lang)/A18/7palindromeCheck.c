#include <stdio.h>
#include <string.h>
void palindCheck(char a[]);
int main ()
{
    char str[100];
    int i;

    printf("enter the string : ");
    fgets(str, 100, stdin);

    palindCheck(str);

    return 0;
}

void palindCheck(char a[])
{
    int i, j;
    j = strlen(a)-2;
    
    for (i=0, j; j>i; i++, j--)
    {
        if (a[i] != a[j])
            break;
    }

    if (i>=j)
        printf("it is a palindrome string");
    else
        printf("it isn't a palindrome string");
}