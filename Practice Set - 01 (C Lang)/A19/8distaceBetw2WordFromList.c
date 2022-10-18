#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
    int i, n, wN1 = 0, wN2 = 0, min = 999999;

    printf("enter number of words/string in the list : ");
    scanf("%d", &n);

    char str[n][20], w1[20], w2[20];

    fflush(stdin);
    printf("enter all strings of list : ");

    for (i=0; i<n; i++)
        fgets(str[i], 20, stdin);

    printf("enter the first word to search : ");
    fgets(w1, 20, stdin);

    printf("enter second word to search : ");
    fgets(w2, 20, stdin);

    for (i=0; i<n; i++)
    {
        if(strcmp(str[i], w1)==0)
            wN1 = i+1;

        if(strcmp(str[i], w2)==0)
            wN2 = i+1;
        
        if(wN1 && wN2)
            min = min<abs(wN2-wN1)? min : abs(wN2-wN1);
    }

    if(wN1 && wN2)
        printf("distace between these words is : %d", min);
    else
        printf("error!!, plz enter valid words from the list");

    return 0;
}