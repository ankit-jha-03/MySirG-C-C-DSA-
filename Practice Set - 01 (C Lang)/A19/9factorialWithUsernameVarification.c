#include <stdio.h>
#include <string.h>
int fact(int);
int main ()
{
    int i, j, k, n;
    char str[5][50] = {"ankit","rahul","vikas","vinod","dheeraj"};
    char check[50];

    printf("enter ur username : ");
    gets(check);                    // else we have to remove enter key of fgets

    for (i=0; i<5; i++)
    {
        if(strcmp(str[i], check)==0)
        {
            printf("user Idetentification successed!!\n");
            printf("enter the nummber to calculate factorial : ");
            scanf("%d", &n);
            printf("factorial of %d is : %d", n,fact(n));
            break;
        }

    }

    if(i==5)
        printf("username doesn't matched!!");

    return 0;
}

int fact(int a)
{
    if(a==1 || a==0)
        return 1;
    else
        return a*fact(a-1);

}