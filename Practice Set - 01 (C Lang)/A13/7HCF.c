#include <stdio.h>
int hcf(int, int);
int main ()
{
    int a, b;
    printf("enter : ");
    scanf("%d %d", &a, &b);

    printf("HCF of %d & %d is : %d", a, b, hcf(a,b));
    return 0;
}

// long division method

int hcf(int a, int b)
{
    if(a>b)
    {
        if(a%b==0)
            return b;
        hcf(a%b, b);
    }
    else
    {    
        if(b%a==0)
            return a;
        hcf(a, b%a);
    }
}


/* hcf by common method

#include <stdio.h>
int hcf(int, int, int);
int main ()
{
    int a, b, i;
    printf("enter : ");
    scanf("%d %d", &a, &b);
    
    i = a>b?b:a;

    printf("HCF of %d & %d is : %d", a, b, hcf(a,b, i));
    return 0;
}

int hcf(int a, int b, int i)
{
    if(a%i==0 && b%i==0)
        return i;
    else
        hcf(a,b,--i);           // why working?? (without return)
    
}
*/