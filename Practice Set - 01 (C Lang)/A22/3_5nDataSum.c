#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int i, n, sum = 0, *ptr;

    printf("enter number of elements : ");
    scanf("%d", &n);

    ptr = (int*) calloc(n, sizeof(int));

    for(i=0; i<n; i++)
    {
        printf("enter %ds number : ", i+1);
        scanf("%d", ptr+i);
        sum += ptr[i];
    }
    free(ptr);

    printf("sum is : %d", sum);
    return 0;
}