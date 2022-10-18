// Without predefine Function
#include <stdio.h>
void strcpy(char b[], char a[]);
int main ()
{
    char str1[100], str2[100];

    printf("enter the string : ");
    fgets(str1, 100, stdin);

    strcpy(str2, str1);

    printf("copied string : %s", str2);

    return 0;
}


void strcpy(char b[], char a[])
{
    int i;

    for(i=0; a[i]; i++)
    {
        b[i] = a[i];
        if (a[i] == 10)     // to remover 'Enter' key with 'NULL' character
        {
            b[i] = 0;
            break;
        }
    }
}