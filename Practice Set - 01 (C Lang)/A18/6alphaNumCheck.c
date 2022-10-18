#include <stdio.h>
int alphaNumCheck(char a[]);
int main ()
{
    char str[100];
    
    printf("enter string : ");
    fgets(str, 100, stdin);

    alphaNumCheck(str);
    
    return 0;
}

int alphaNumCheck (char a[])
{
    int i, alpha = 0, digi = 0;

    for (i=0; a[i]; i++)
    {
        if ((a[i]>=65 && a[i]<=90) || (a[i]>=97 && a[i]<=122))      // also can write alphabet : ex - 'a';
            alpha = 1;
        if (a[i]>=48 && a[i]<=57)
            digi = 1;
        if (alpha && digi)
            break;
    }

    if(alpha && digi)
        printf("yes, it is alphaNumerical");
    else
        printf("no, it is not alphaNumerica");
}