#include <stdio.h>
void strupr(char a[]);
int main ()
{
    char str[100];
    int i;

    printf("enter the string : ");
    fgets(str, 100, stdin);

    strupr(str);

    printf("%s", str);

    return 0;
}

void strupr(char a[])
{
    int i;
    
    for(i=0; a[i]; i++)
    {
        if (a[i]>=97 && a[i]<=122)
            a[i] -= 32;
    }
}