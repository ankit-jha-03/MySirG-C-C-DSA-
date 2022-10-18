#include <stdio.h>
int main ()
{
    int m;
    printf("enter the number of month : ");
    scanf("%d", &m);

    switch(m)
    {
        case 1 :
        case 3 :
        case 5 :
        case 7 :
        case 8 :
        case 10 :
        case 13 :
            printf("number of days : 31");
            break;

        case 4 :
        case 6 :
        case 9 :
        case 11 :
            printf("number of days : 30");
            break;
        
        case 2 :
            printf("number of days : 28 or 29");
            break;

        default :
        printf("Invalid number!!");
    }
    return 0;
}