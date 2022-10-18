#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int i, n, sum = 0, *ptr;

    printf("enter number of elements : ");
    scanf("%d", &n);

    ptr = (int*) malloc(n* sizeof(int));

    // if(ptr==NULL)
    // {
    //     printf("memory allocation failed");
    //     return 0;
    // }

    for(i=0; i<n; i++)
    {
        printf("enter %ds number : ", i+1);
        scanf("%d", ptr+i);             // &ptr[i]
        sum += ptr[i];
    }
    free(ptr);

    printf("avg is : %.2f", (1.0*sum)/n);
    return 0;
}