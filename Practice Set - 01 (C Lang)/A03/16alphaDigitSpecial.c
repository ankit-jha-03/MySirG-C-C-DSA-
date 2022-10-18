#include <stdio.h>
int main ()
{
    char a;
    printf("enter a character : ");
    scanf("%c", &a);

    if(a>='A' && a<='Z')
        printf("its a uppercase alphabet");
    else if(a>='a' && a<='z')
        printf("its a lowercase alphabet");
    else if(a>47 && a<58)
        printf("its digit");
    else
         printf("its a special character");
    return 0;
}