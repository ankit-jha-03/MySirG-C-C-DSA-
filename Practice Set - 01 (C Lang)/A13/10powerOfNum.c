#include <stdio.h>
float power(int, int);
int main ()
{
    int m, n;
    printf("enter base : ");
    scanf("%d", &m);
    printf("to the power : ");
    scanf("%d", &n);

    printf("%d to the power %d is  : %.2f", m, n, power(m,n));
    return 0;
}

float power(int m, int n)
{
    if (n==0)
        return 1;

    else if (n>0)
        return m*power(m,--n);

    else
        return 1/(m*power(m,++n));

}