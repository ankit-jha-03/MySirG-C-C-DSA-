#include <stdio.h>
int main ()
{
    char str[100];
    int i, count;

    printf("enter the string : ");
    fgets(str, 100, stdin);

    for(i=0; str[i]; i++)
    {
        if (str[i]=='a'|| str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'
         || str[i]=='A'|| str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
            count++;
    }

    printf("number of vowels in \"%s\" is : %d", str, count);
    return 0;
}