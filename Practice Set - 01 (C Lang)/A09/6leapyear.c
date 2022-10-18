#include <stdio.h>
int main ()
{
    int y;
    printf("enter year : ");
    scanf("%d", &y);

    switch(y%100)
    {
        case 0 :
            switch(y%400)
            {
                case 0 :
                    printf("yes, its a leap year");
                    break;
                            
                default :
                    printf("its not a leap year");
            }
            break;

        default :
            switch(y%4)
            {
                case 0 :
                    printf("yes, its a leap year");
                    break;
                            
                default :
                    printf("its not a leap year");
            }
    }
    return 0;
}