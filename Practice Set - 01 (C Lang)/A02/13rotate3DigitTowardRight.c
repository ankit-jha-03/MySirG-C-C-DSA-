#include <stdio.h>
int main ()
{
    int a,b;
    printf("enter a 3 digit number : ");
    scanf("%d", &a);

    b = a%10;
    a /= 10;
    b = b+a;
    
    printf("accordingly, the new number will be : %d", b);
    return 0;
}

/* long method
    b = (a%10)*100;
    a /= 10;
    b += a%10;
    a /= 10;
    b += a*10;
*/
