#include <stdio.h>
#include <math.h>
int main ()
{
    int n, temp, sum, digit;             // again the same problem with 153

    for (n=0; n<1000; n++)
    {

        for (temp = n, digit = 1 ; temp>9 ; temp=temp/10, digit++);

        for(temp = n, sum=0 ; temp>0 ; temp=temp/10)
        {
            sum += pow(temp%10,digit);
        }

        if (n==sum)
            printf("%d\n", n);
    }
        
    return 0;
}