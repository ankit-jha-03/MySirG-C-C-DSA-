//using constructors
#include<iostream>
using namespace std;
int count = 1;
class Person
{
    char name[20], address[50];
    long long phoneNo;

    public :
    Person()
    {
        bool temp = true;

        cout<<endl<<"Enter Details of Person/Employee/Manager ("<<count<<")";
        cout<<endl<<"-----------------------------------------"<<endl;

        cout<<"Enter Name  :  ";
        fflush(stdin);
        fgets(name, 19, stdin);
        name[19] = '\n';        // to secure new line

        cout<<"Enter Phone No.  :  ";
        while(temp)
        {
            cin>>phoneNo;
            if(phoneNo<=9999999999)
                temp = false;
            else
                cout<<"please enter a valid Phone No.\n";
        }

        cout<<"Enter Address  :  ";
        fflush(stdin);
        fgets(address, 19, stdin);
        address[49] = '\n';

        count++;
    }
    char* getName() {return name;}
};
class Employee : public Person
{
    int empid;

    public :
    Employee()
    {
        cout<<"Enter Employee ID  :  ";
        cin>>empid;
    }
};
class Manager : public Employee
{
    char designation[20], department[20];
    int salary;

    public :
    Manager()
    {
        cout<<"Enter Designation  :  ";
        fflush(stdin);
        fgets(designation, 19, stdin);
        designation[19] = '\n';

        cout<<"Enter Department  :  ";
        fflush(stdin);
        fgets(department, 20, stdin);
        department[19] = '\n';

        cout<<"Enter Salary  :  ";
        cin>>salary;
    }
    int getSalary() {return salary;}
};
int main()
{
    int i = 0, n, temp = 0;
    cout<<"Enter number of managers : ";
    cin>>n;
    Manager m[n];

    for (i=1; i<n; i++)
        if(m[i].getSalary()>m[temp].getSalary())
            temp = i;
    
    cout<<endl<<"Manager with highest Salary is : "<<m[temp].getSalary()<<endl;
    cout<<"And, Manager's Name is  :  "<<m[temp].getName();
    return 0;
}