#include <stdio.h>
int strlen(char a[]);
int main ()
{
    char str[100];
    
    printf("enter string : ");
    fgets(str, 100, stdin);
    
    printf("length of string is : %d", strlen(str));
    return 0;
}

int strlen (char a[])
{
    int i;
    for(i=0; a[i]; i++);
    return i-1;         // coz fgets takes enter key as a input
}