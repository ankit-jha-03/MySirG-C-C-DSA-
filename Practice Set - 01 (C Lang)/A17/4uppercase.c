#include <stdio.h>
#include <string.h>
int main ()
{
    char str[100];
    
    printf("enter string : ");
    fgets(str, 100, stdin);
    
    printf("%s", strupr(str));

    return 0;
}