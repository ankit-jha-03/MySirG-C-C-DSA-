#include <stdio.h>
int main ()
{
    char a;
    printf("enter a alphabet : ");
    scanf("%c", &a);

    if(a>='A' && a<='Z')                            // also can write ASCII code (65 & 90)
        printf("its a uppercase alphabet");
    else if(a>='a' && a<='z')                      // 95 & 122
        printf("its a lowercase alphabet");
    else
        printf("its not an alphabet");  
    return 0;
}