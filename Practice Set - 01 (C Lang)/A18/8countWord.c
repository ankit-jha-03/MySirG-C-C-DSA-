#include <stdio.h>
#include <string.h>
int wordCount(char a[]);
int main ()
{
    char str[100];
    int i;

    printf("enter the string : ");
    fgets(str, 100, stdin);

    printf("number of words in the given string is : %d", wordCount(str));

    return 0;
}

int wordCount(char a[])
{
    int i, words = 1;

    for (i=0; a[i]; i++)
    {
        if(a[i] == ' ' && a[i+1] != ' ' && a[i+1] != 10)
            words++;
    }
    
    return words;
}