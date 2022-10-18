#include <stdio.h>

int fact(int a)
{
    int fact = 1;
    while (a>1)
    {
        fact *= a;
        a--;
    }

    return fact;
}

int comb(int n, int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}

void pascal(int);

// main

int main ()
{
    int n;
    printf("enter raws : ");
    scanf("%d", &n);

    pascal(n);

    return 0;
}

void pascal(int n)
{
    int i, j, k;

    for(i=0; i<n; i++)
    {
        for(k=0;k<n-i;k++)
        {
            printf("  ");
        }

        for(j=0; j<=i; j++)
        {
            printf("%2d  ", comb(i,j));
        }
        printf("\n");
    }
}



// void pascal(int n)
// {
//     int i, j, k, r;

//     for(i=1; i<=n; i++)
//     {
//         k=1, r=0;
//         for(j=1; j<=2*n-1; j++)
//         {
//             if(j>=n+1-i && j<=n-1+i && k)
//             {
//                 printf("%2d ", comb(i-1,r));
//                 k=0;
//                 r++;
//             }
//             else
//             {
//                 printf("  ");
//                 k=1;
//             }
//         }
//         printf("\n");
//     }
// }