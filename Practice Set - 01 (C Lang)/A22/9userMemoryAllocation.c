#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int n;
    printf("enter memory size : ");
    scanf("%d", &n);

    void *ptr;
    ptr = malloc(n);

    if(ptr == NULL)
        printf("memory allocatin failed!!");
    else
        printf("memory allocated with base address : %d", ptr);
        
    return 0;
}