#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int *ptr;

    ptr = (int*) malloc(sizeof(int));

    // didn't used : free()

    ptr = NULL;     // or anything else

    return 0;
}