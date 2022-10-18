#include <stdio.h>
#include <math.h>
int main ()
{
    int n, temp, sum, digit;         // in "VS-Code" for 153 'n' becomes 152, i don't know why...
    printf("enter : ");                 // although its perfactly working on online compilers.
    scanf("%d", &n);

    for (temp = n, digit = 1 ; temp>9 ; temp=temp/10, digit++);

    for(temp = n, sum=0 ; temp>0 ; temp=temp/10)
    {
        sum += pow(temp%10,digit);
    }

    if (n==sum)
        printf("its armstrong number");
    else
        printf("its not a armstrong number");
    return 0;
}