#include<iostream>
using namespace std;
int count = 1;
class Worker
{
    protected :
    int code, workerNo;
    char name[20];
    float salary;

    public :
    Worker()
    {
        cout<<endl<<"Enter Information for Worker "<<count;
        cout<<"\n\n-----------------------------------";
        workerNo = count;
        count++;

        cout<<endl      <<"Enter Code     :  ";
        cin>>code;
        cout<<endl<<"Enter Name     :  ";
        fflush(stdin);
        fgets(name, 19, stdin);
        name[19] = '\n'; 
        cout<<endl<<"Enter Salary   :  ";
        cin>>salary;
    }
    void workerInfo()
    {
        cout<<"\n\n-----------------------------------\n";
        cout<<"Worker\\Manager "<<workerNo<<"'s Information";
        cout<<"\n-----------------------------------";
        cout<<endl<<"Code          :  "<<code;
        cout<<endl<<"Name          :  "<<name;
        cout<<"Salary        :  "<<salary;
    }
};
class Officier
{
    protected :
    float DA, HRA;

    public :
    Officier()
    {
        cout<<endl<<"Enter DA       :  ";
        cin>>DA;
        cout<<endl<<"Enter HRA      :  ";
        cin>>HRA;
    }
    void officierInfo()
    {
        cout<<endl<<"DA            :  "<<DA;
        cout<<endl<<"HRA           :  "<<HRA;
    }

};
// first inherted class's constructor will run first
class Manager : public Worker, public Officier          // by default public??
{
    float TA, grossSalary;

    public :
    Manager()
    {
        TA = salary/10;
        grossSalary = salary + DA + HRA + TA;
    }
    void managerInfo()
    {
        workerInfo();
        officierInfo();
        cout<<endl<<"TA            :  "<<TA;
        cout<<endl<<"Gross Salary  :  "<<grossSalary;
    }
};
int main()
{
    int i = 0, n;
    cout<<"Enter No. of Managers  :  ";
    cin>>n;
    Manager m[n];

    for(i=0; i<n; i++)  m[i].managerInfo();
    return 0;
}