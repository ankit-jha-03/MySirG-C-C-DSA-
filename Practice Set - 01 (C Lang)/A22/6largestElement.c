#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int i, n, largest = -999999, *ptr;

    printf("enter number of elements : ");
    scanf("%d", &n);

    ptr = (int*) calloc(n, sizeof(int));

    for(i=0; i<n; i++)
    {
        printf("enter %ds number : ", i+1);
        scanf("%d", &ptr[i]);
        largest = largest>ptr[i] ? largest : ptr[i];
    }
    free(ptr);

    printf("largest is : %d", largest);
    return 0;
}