#include <stdio.h>
#include <string.h>
int main ()
{
    char str[10][50], temp[50];
    int i, j;

    for(i=0; i<10; i++)
    {
        printf("enter %ds string : ", i+1);
        fgets(str[i], 50, stdin);
    }

    for (i=0; i<9; i++)
    {
        for (j=i+1; j<10; j++)
        {
            if(strcmp(str[i], str[j])==1)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    for(i=0; i<10; i++)
        printf("%s", str[i]);

    return 0;
}

/* as function : n must should pass before array : 

void sort (int m, int n, char a[][n])
{
    int i, j;
    char temp[n];

    for (i=0; i<m-1; i++)
    {
        for (j=i+1; j<m; j++)
        {
            if(strcmp(a[i], a[j])==1)
            {
                strcpy(temp, a[i]);
                strcpy(a[i], a[j]);
                strcpy(a[j], temp);
            }
        }
    }
}

*/