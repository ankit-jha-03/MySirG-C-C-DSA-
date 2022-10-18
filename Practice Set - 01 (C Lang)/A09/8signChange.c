#include <stdio.h>
int main ()
{
    float n;
    printf("enter the number : ");
    scanf("%f", &n);

    switch(n>=0)             // used comparing operator coz float datatype
    {
        case 1 :
            printf("%.2f", n);
            break;
        case 0 :
            printf("%.2f", -n);
    }
    return 0;
}