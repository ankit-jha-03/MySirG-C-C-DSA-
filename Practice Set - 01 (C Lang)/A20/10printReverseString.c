#include <stdio.h>
void reverse(char*);
int strleng(char*);
int main ()
{
    char a[30];
    printf("enter the string : ");
    fgets(a, 30, stdin);

    reverse(a);

    return 0;
}

void reverse (char *p)
{
    int i, n;
    n = strleng(p)-1;

    for(i=n; i>=0; i--)
    {
        printf("%c", p[i]);
    }
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