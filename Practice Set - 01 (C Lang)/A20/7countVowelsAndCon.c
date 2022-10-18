#include <stdio.h>
void countAlpha(char*);
int main ()
{
    char a[30];

    printf("enter the string : ");
    fgets(a, 30, stdin);

    countAlpha(a);
    return 0;
}

void countAlpha(char* p)
{
    int i, v = 0, c = 0;

    for(i=0; p[i]!=0; i++)
    {
        if((p[i]>'a' && p[i]<'z') || (p[i]>'A' && p[i]<'Z'))
        {
            if(p[i]=='a' || p[i] == 'e' || p[i]=='i' || p[i] == 'o' || p[i] == 'u'
            || p[i]=='A' || p[i] == 'E' || p[i]=='I' || p[i] == 'O' || p[i] == 'U')
                v++;
            else
                c++;
        }
    }

    printf("number of vowels = %d\n", v);
    printf("number of consonents = %d", c);
}