#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int *ptr;

    ptr = (int*) malloc(sizeof(int));
    *ptr = 10;
    
    printf("before : %d\n", *ptr);
    
    free(ptr);

    printf("after : %d\n", *ptr);

    return 0;
}