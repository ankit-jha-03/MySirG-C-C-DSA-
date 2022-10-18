#include <stdio.h>
#include <string.h>
struct employee
{
    int id;
    char name[20];
    float salary;
};

struct employee input()
{
    struct employee emp;

    printf("enter memberID : ");
    scanf("%d", &emp.id);

    printf("enter name : ");
    fflush(stdin);
    fgets(emp.name, 20, stdin);
    emp.name[strlen(emp.name)-1] = '\0';        // to remove '\n' enter by fgets.

    printf("enter salary : ");
    scanf("%f", &emp.salary);

    return emp;
}

void display(struct employee emp)
{
    printf("ID : %d\n", emp.id);
    printf("Name : %s\n", emp.name);
    printf("Salary : %.2f", emp.salary);
}


int main ()
{
    struct employee emp1;

    emp1 = input();
    display(emp1);

    return 0;
}