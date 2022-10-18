#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int i, n, max = -999999, min = 999999, *ptr;

    printf("enter number of elements : ");
    scanf("%d", &n);

    ptr = (int*) calloc(n, sizeof(int));

    for(i=0; i<n; i++)
    {
        printf("enter %ds number : ", i+1);
        scanf("%d", &ptr[i]);
        max = max>ptr[i] ? max : ptr[i];
        min = min<ptr[i] ? min : ptr[i];
    }
    free(ptr);

    printf("max is : %d\n", max);
    printf("min is : %d", min);
    return 0;
}