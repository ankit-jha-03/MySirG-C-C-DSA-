#include <stdio.h>
int main ()
{
    char search, str[100];
    int i, count = 0;

    printf("enter the string : ");
    fgets(str, 100, stdin);

    printf("enter the charater : ");
    fflush(stdin);
    scanf("%c", &search);

    for (i=0; str[i]; i++)
        str[i]==search? count++ : count;

    printf("the character %c occurs %d times, in the given string", str, search, count);

    return 0;
}