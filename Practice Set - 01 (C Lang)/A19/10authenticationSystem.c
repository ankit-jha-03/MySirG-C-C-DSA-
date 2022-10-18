#include <stdio.h>
#include <string.h>
int main ()
{
    int i, j, m = 1, pass = 0;
    char str[5][2][20] = {"ankit","123","rahul","234","vikas","345","vinod","456","dheeraj","567"};
    char username[20], password[20];

    while(m)
    {
        fflush(stdin);
        printf("enter your username : ");
        gets(username);

        for (i=0; i<5; i++)
        {
            if(strcmp(str[i][0], username)==0)
            {
                printf("username matched!!\n");
                printf("enter password : ");

                gets(password);

                if(strcmp(str[i][1], password)==0)
                {
                    printf("user authentication successed!!\n");
                    pass = 1;
                }
                else
                    printf("password doesn't matched\n");

                break;
            }

        }

        if(i==5)
            printf("username doesn't matched!!\n");

        else
        {
            if(pass)
                break;
                
            printf("password doesn't matched!!\n");
        }

        printf("press 0 - to exit : ");
        scanf("%d", &m);
    }

    return 0;
}