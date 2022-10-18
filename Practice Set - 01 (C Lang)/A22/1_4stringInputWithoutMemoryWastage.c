#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int i, n = 1;
    char c, *ptr;
    ptr = (char*) malloc(n* sizeof(char));

    for(i=0; c!='\n'; i++)
    {
        c = getc(stdin);            // have to understand these function properly
        n++;
        ptr = realloc(ptr, n*sizeof(char));
        ptr[i] = c;
    }

    ptr[i-1] = '\0';                // to remove '\n' to NULL

    printf("string is : %s", ptr);
    free(ptr);
    
    return 0;
}