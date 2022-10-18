#include <stdio.h>
int strleng(char*);
int main ()
{
    char a[20];
    printf("enter the string : ");
    fgets(a, 20, stdin);

    printf("length of the string is : %d", strleng(a));

    return 0;
}

int strleng (char *p)
{
    int count = 0;

    while(*p!=0 && *p!=10)
    {
        ++p;
        count++;
    }

    return count;
}