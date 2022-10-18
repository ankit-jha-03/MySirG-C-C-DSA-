#include <stdio.h>
struct employee
{
    char name[20];
    int id;
    float salary;
};

struct employee input()
{
    struct employee emp;

    printf("enter Name, Id & Salaray : ");
    fflush(stdin);
    gets(emp.name);
    scanf("%d", &emp.id);
    scanf("%f", &emp.salary);

    return emp;
}

void display(struct employee emp)
{
    printf("Name : %s, ID : %d, Salary : %.2f\n", emp.name, emp.id, emp.salary);
}

struct employee highest(struct employee emp[], int n)
{
    struct employee temp = {"abc", 123, 0};
    int i;
    
    for (i=0; i<n-1; i++)
    {
        temp = temp.salary>emp[i].salary ? temp : emp[i];
    }

    return temp;
}

int main ()
{
    int i, n = 5;
    struct employee emp[n];

    for (i=0; i<n; i++)
    {
        printf("enter %ds emplyee's data\n", i+1);
        emp[i] = input();
    }

    display(highest(emp, n));

    return 0;
}