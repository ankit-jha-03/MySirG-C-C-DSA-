#include <stdio.h>
struct students
{
    int rollNo;
    char name[20];
};

struct students input()
{
    struct students s;

    printf("enter roll No. : ");
    scanf("%d", &s.rollNo);

    printf("enter name : ");
    fflush(stdin);
    fgets(s.name, 20, stdin);

    return s;
}

void display(struct students s)
{
    printf("roll no. : %d, name : %s", s.rollNo, s.name);
}


int main ()
{
    int i, n;
    printf("enter number of students : ");
    scanf("%d", &n);

    struct students s[n];

    for (i=0; i<n; i++)
    {
        printf("enter %ds student's info\n", i+1);
        s[i] = input();
    }

    for (i=0; i<n; i++)
        display(s[i]);

    return 0;
}