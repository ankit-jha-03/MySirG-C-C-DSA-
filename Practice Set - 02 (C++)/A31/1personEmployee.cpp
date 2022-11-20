#include<iostream>
#include<string.h>
using namespace std;
class Person
{
    char name[20];      // is same as : name[20]
    int age;

    public :
    void setName() 
    {
        fflush(stdin);
        fgets(name, 20, stdin);
        if(name[strlen(name)-1] == '\n')
            name[strlen(name)-1] = '\0';
    }
    void setAge() {cin>>age;}
    char* getName() {return name;}      // Shallow Copy problem
    int getAge() {return age;}
};
class Employee : public Person
{
    int empId, salary;
    
    public :
    void setEmpId() {cin>>empId;}
    void setSalary() {cin>>salary;}
    int getEmpId() {return empId;}
    int getSalary() {return salary;}
};
int main()
{
    Employee e;
    cout<<"Enter Name, Age, Employee Id & Salary : \n";
    e.setName();
    e.setAge();
    e.setEmpId();
    e.setSalary();

    cout<<"Name : "<<e.getName()<<endl;
    cout<<"Age : "<<e.getAge()<<endl;
    cout<<"Employee ID : "<<e.getEmpId()<<endl;
    cout<<"Salary : "<<e.getSalary()<<endl;
    return 0;
}