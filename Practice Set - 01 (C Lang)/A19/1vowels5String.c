#include <stdio.h>
int main ()
{
    char str[5][50];
    int i, j, count;

    for(i=0; i<5; i++)
    {
        printf("enter %ds string : ", i+1);
        fgets(str[i], 50, stdin);
    }

    for(i=0; i<5; i++)
    {
        count = 0;
        for(j=0; str[i][j]!=10; j++)
        {
            if (str[i][j]=='a'|| str[i][j]=='e' || str[i][j]=='i' || str[i][j]=='o' || str[i][j]=='u'
            || str[i][j]=='A'|| str[i][j]=='E' || str[i][j]=='I' || str[i][j]=='O' || str[i][j]=='U')
            count++;
        }

        printf("number of vowels in %ds string : %d\n", i+1, count);
        count = 0;
    }

    return 0;
}