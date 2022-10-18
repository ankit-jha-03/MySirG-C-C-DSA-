#include <stdio.h>
#include <string.h>
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

struct employee sort(struct employee emp[], int n)
{
    struct employee temp;
    int i, j;
    
    for (i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(strcmp(emp[i].name, emp[j].name)==1)
            {
                temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }

        }
    }
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

    sort(emp, n);

    for(i=0; i<n; i++)
        display(emp[i]);

    return 0;
}