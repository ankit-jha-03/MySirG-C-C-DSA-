#include <stdio.h>
void primeFacts(int);
int main ()
{
    int n;
    printf("enter : ");
    scanf("%d", &n);
    
    primeFacts(n);

    return 0;
}

void primeFacts(int n)
{
    int i;
    for(i=2;  n!=1 ; i++)
    {
        while (n%i==0)
        {
            printf("%d\n", i);
            n /= i;
        }
    }
}


// void primeFacts(int n)
// {
//     int i,j,p=0;
//     while(1)
//     {
//         for(i=2 ; i<=n ; i++)
//         {
//             for(j=2; j<=i/2; j++)
//             {
//                 if(i%j==0)
//                     break;
//             }

//             if(j>i/2)
//             {
//                 p=i;

//                 if (n%p==0)
//                 {
//                     printf("%d\n", p);
//                     n=n/p;
//                     break;
//                 }
//             }
//         }
//         if(n==1)
//             break;
//     }
// }


            // printf("%d\n", i);
            // n /= i;
            // i--;