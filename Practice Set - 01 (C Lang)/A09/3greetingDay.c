#include <stdio.h>
int main ()
{
    int k;
    
    printf("enter the number of weekday\n");
    printf("(i.e. : 1 - for sunday\n");
    printf("        2 - for monday)\n");
    printf("\nenter the day : ");
    scanf("%d", &k);

    switch(k)
    {
        case 1 :
            printf("hello, its sunday");
            break;
        case 2 :
            printf("hello, its monday");
            break;
        case 3 :
            printf("hello, its tuesday");
            break;
        case 4 :
            printf("hello, its wednesday");
            break;
        case 5 :
            printf("hello, its thrusday");
            break;
        case 6 :
            printf("hello, its friday");
            break;
        case 7 :
            printf("hello, its saturday");
            break;
        
        default :
            printf("invalid input!!");
    }
    return 0;
}