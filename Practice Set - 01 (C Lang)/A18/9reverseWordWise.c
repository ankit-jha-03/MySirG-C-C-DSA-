#include <stdio.h>
void wordReverse(char a[]);
void reverse (int, int, char a[]);
int main ()
{
    char str[100];
    int i = 0;

    printf("enter the string : ");
    fgets(str, 100, stdin);

    wordReverse(str);

    return 0;
}

void wordReverse(char a[])
{
    int i, start = 0, end = 0;

    for (i=0; a[i]!=0; i++)
    {
        if(a[i]==' ' || a[i] == 10)
        {
            end = i-1;
            reverse(start, end, a);

            for( ;a[i+1]==' ';i++);     // to eliminate spaces
            start = i+1;
        }
    }

    reverse(start, i-1, a);

    for (i-=1; i>=0; i--)
        printf("%c", a[i]);


}

void reverse (int i, int j, char a[])
{
    char temp;
    for( ; j>i; i++, j--)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}