#include <stdio.h>
void strlwr(char a[]);
int main ()
{
    char str[100];
    int i;

    printf("enter the string : ");
    fgets(str, 100, stdin);

    strlwr(str);

    printf("%s", str);

    return 0;
}

void strlwr(char a[])
{
    int i;
    
    for(i=0; a[i]; i++)
    {
        if (a[i]>=65 && a[i]<=90)
            a[i] += 32;
    }
}