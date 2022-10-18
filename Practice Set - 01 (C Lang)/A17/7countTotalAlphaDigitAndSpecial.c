#include <stdio.h>
int countAll(char a[]);
int main ()
{
    char str[100];
    
    printf("enter string : ");
    fgets(str, 100, stdin);
    
    countAll(str);

    return 0;
}

int countAll (char a[])
{
    int i, alp=0, digi=0, sp=-1;         // -1 for 'enter key'
    
    for(i=0; a[i]; i++)
    {
        if((a[i]>=65 && a[i]<=90) || (a[i]>=97 && a[i]<=122))
            alp++;
        else if(a[i]>=48 && a[i]<=57)
            digi++;
        else
            sp++;
    }

    printf("alphabets : %d\n", alp);
    printf("digits : %d\n", digi);
    printf("special characters : %d\n", sp);
}