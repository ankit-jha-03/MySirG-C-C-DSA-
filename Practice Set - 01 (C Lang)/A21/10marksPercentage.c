#include <stdio.h>
int mM;
struct students
{
    int rollNo;
    char name[20];
    int phy_mark, chem_mark, maths_mark;
};

struct students input()
{
    struct students s;

    printf("enter roll No. : ");
    scanf("%d", &s.rollNo);

    printf("enter name : ");
    fflush(stdin);
    gets(s.name);

    printf("enter marks of phy, chem & maths : ");
    scanf("%d %d %d", &s.phy_mark, &s.chem_mark, &s.maths_mark);

    return s;
}

void display(struct students s)
{
    printf("roll no. : %d, name : %s, percentage : %.2f\n", s.rollNo, s.name, 100.0*((s.phy_mark+s.chem_mark+s.maths_mark)/(3.0*mM)));
}


int main ()
{
    int i;
    struct students s[5];

    printf("enter max marks of a paper : ");
    scanf("%d", &mM);

    for (i=0; i<5; i++)
    {
        printf("enter %ds student's info\n", i+1);
        s[i] = input();
    }

    for (i=0; i<5; i++)
        display(s[i]);

    return 0;
}