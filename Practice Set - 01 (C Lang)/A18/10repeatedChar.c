// hashing & without hashing
#include <stdio.h>
#include <string.h>
int repeatedChars(char a[]);
int repeatedChars2(char a[]);
int main ()
{
    char str[100], search;
    
    printf("enter string : ");
    fgets(str, 100, stdin);
    
    repeatedChars(str);         // function - repeatedChar2 : to count without hashing.

    return 0;
}

// hashing
int repeatedChars (char a[])
{
    int i, repeated[256] = {0};

    for (i=0; a[i]; i++)
    {
        if (a[i]!=10)               // to remove enter key
            repeated[a[i]]++;
    }

    for (i=0; i<256; i++)
    {
        if(repeated[i]>1)
            printf("%c repeats %d times\n", i, repeated[i]-1);
    }
}

// without hashing, increase space complaxity & time complaxity if string length is > 22.
int repeatedChars2 (char a[])
{
    int i, j, l = strlen(a)-1, count, repeated[100] = {0};

    for (i=0; i<l; i++)
    {
        if(repeated[i]!=-1)
        {
            repeated[i] = 0;

            for (j=i+1; j<l; j++)
            {
                if (a[i] == a[j])
                {
                    repeated[i]++;
                    repeated[j] = -1;
                }
            }
        }
    }

    for (i=0; i<=l; i++)
    {
        if(repeated[i]>0)
            printf("'%c' repeats %d times\n", a[i], repeated[i]);
    }
}