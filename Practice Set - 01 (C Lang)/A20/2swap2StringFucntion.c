#include <stdio.h>
void swap(char*, char*);
int main ()
{
    char a[10] = "first", b[10] = "second";

    swap(&a[0],&b[0]);                  // a, b

    printf("first string : %s\n", a);
    printf("second string : %s", b);

    return 0;
}

void swap (char *a, char *b)            // a[], b[]
{
    char temp;
    int i = 0;

    while (a[i] != 0 || b[i] != 0)      // *(p+i), *(q+1)
    {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;

        i++;
    }
}