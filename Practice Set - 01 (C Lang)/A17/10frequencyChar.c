// hashing & without hashing
#include <stdio.h>
#include <string.h>
int freqChars(char a[]);
int freqChars2(char a[]);
int main ()
{
    char str[100], search;
    
    printf("enter string : ");
    fgets(str, 100, stdin);
    
    freqChars(str);         // function - freqChar2 : to count without hashing.

    return 0;
}

// hashing
int freqChars (char a[])
{
    int i, freq[256] = {0};

    for (i=0; a[i]; i++)
    {
        if (a[i]!=10)               // to remove enter key
            freq[a[i]]++;
    }

    for (i=0; i<256; i++)
    {
        if(freq[i]>0)
            printf("%c occurs %d times\n", i, freq[i]);
    }
}

// without hashing, increase space complaxity & increase time complaxity if string length is > 22.
int freqChars2 (char a[])
{
    int i, j, l = strlen(a)-1, count, freq[100] = {0};

    for (i=0; i<l; i++)
    {
        if(freq[i]!=-1)
        {
            freq[i] = 1;

            for (j=i+1; j<l; j++)
            {
                if (a[i] == a[j])
                {
                    freq[i]++;
                    freq[j] = -1;
                }
            }
        }
    }

    for (i=0; i<=l; i++)
    {
        if(freq[i]>0)
            printf("frequency of %c is %d\n", a[i], freq[i]);
    }
}