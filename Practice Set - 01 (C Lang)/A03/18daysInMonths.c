#include <stdio.h>
int main ()
{
    int m;
    printf("enter the month in number : ");
    scanf("%d", &m);

    if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
        printf("there are 31 days in this month");
    else if (m==4 || m==6 || m==9 || m==11)
        printf("there are 30 days in this month");
    else if (m==2)
        printf("there are 28 or 29 (if its a leap year) days in tis month");
    else
        printf("its not a valid month number");
    return 0;
}