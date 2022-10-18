#include <stdio.h>
void strrev (char a[]);
int strlen (char a[]);
int main ()
{
    char str[100];
    int i;

    printf("enter the string : ");
    fgets(str, 100, stdin);

    strrev(str);
    fflush(stdin);
    printf("reversed string : %s", str);

    return 0;
}

void strrev (char a[])
{
    char temp;
    int i, j;
    
    j = strlen(a) - 1;

    for (i=0, j; j>i; i++, j--)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    a[i+j+1] = 0;           // to remove enter key (inserted in main function)     
}

int strlen (char a[])
{
    int i;
    for(i=0; a[i]; i++);
    return i-1;             // coz fgets takes enter key as a input
}


/* need more memory

void strrev (char a[])
{
    char temp[100];
    int i, j;

    strcpy(temp, a);
    
    j = strlen(a) - 1;

    for (i=0, j; j>=0; i++, j--)
    {
        a[i] = temp[j];
    }
    a[i] = 0;               // to remove enter key (inserted in main function)     
}
*/


/* only can print in reverse order :

void strrev (char a[])
{
    int i;

    for(i=0; a[i]; i++);

    for (i-=2; i>=0; i--)
        printf("%c", a[i]);
}
*/