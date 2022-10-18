#include <stdio.h>
#include <string.h>
int main ()
{
    char str[100];
    
    printf("enter string : ");
    fgets(str, 100, stdin);
    
    printf("length of string is : %s", strrev(str));
    return 0;
}