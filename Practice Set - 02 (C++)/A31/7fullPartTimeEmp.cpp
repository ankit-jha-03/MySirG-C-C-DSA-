#include<iostream>          // will try with fstream later
using namespace std;
class Employee
{
    protected :
    int empCode;
    char empName[20];
};
class FullTime : public Employee
{
    int dailyRate, days, salary;
    void setSalary() {salary = dailyRate*days;}

    public :
    void entryFT()
    {
        cout<<"Enter Employee Code  :  ";
        cin>>empCode;
        cout<<"Enter Employee Name  :  ";
        fflush(stdin);
        fgets(empName, 19, stdin);
        empName[19] = '\n';         // enter key confirmed to display
        cout<<"Enter Daily Salary Rate  :  ";
        cin>>dailyRate;
        cout<<"enter Number of Working Days  :  ";
        cin>>days;
        setSalary();
    }
    void displayFT()
    {
        cout<<"Employee code  :  "<<empCode<<endl;
        cout<<"Employee Name  :  "<<empName;
        cout<<"Salary         :  "<<salary<<endl;
        cout<<"Status         :  Full Time"<<endl;
    }
    int getEmpCode() {return empCode;}
};
class PartTime : public Employee
{
    int hourlyRate, hours, salary;
    void setSalary() {salary = hourlyRate*hours;}

    public :
    void entryPT()
    {
        cout<<"Enter Employee Code  :  ";
        cin>>empCode;
        cout<<"Enter Employee Name  :  ";
        fflush(stdin);
        fgets(empName, 19, stdin);
        empName[19] = '\n';         // enter key confirmed to display
        cout<<"Enter Hourly Salary Rate  :  ";
        cin>>hourlyRate;
        cout<<"enter Number of Working Hours  :  ";
        cin>>hours;
        setSalary();
    }
    void displayPT()
    {
        cout<<"Employee code  :  "<<empCode<<endl;
        cout<<"Employee Name  :  "<<empName;
        cout<<"Salary         :  "<<salary<<endl;
        cout<<"Status         :  Part Time"<<endl;
    }
    int getEmpCode() {return empCode;}
};
int main()
{
    FullTime *ptrFT, *temp1;
    PartTime *ptrPT, *temp2;
    int choice = 0, i = 1, j = 1, k, status = 0, empCode, num;
    while (1)
    {
        cout<<"1. Enter Record\n";
        cout<<"2. Display Record\n";
        cout<<"3. Search Record\n";
        cout<<"4. Quit\n\n";
        cout<<"Enter Your Choice  :  ";
        cin>>choice;
        cout<<"\n---------------------------------\n\n";

        switch (choice)
        {
        case 1 :
                cout<<"1. Full Time Employee\n";
                cout<<"2. Part Time Employee\n";
                cout<<"Enter The Status of Employee  :  ";
                cin>>status;
                cout<<"\n---------------------------------\n\n";

                if (status == 1)
                {
                    temp1 = new FullTime[i];
                    for(k=0; k<i-1; k++)
                        temp1[k] = ptrFT[k];
                    delete[] ptrFT;
                    ptrFT = temp1;
                    ptrFT[i-1].entryFT();
                    i++;
                }
                else if (status == 2)
                {
                    temp2 = new PartTime[j];
                    for(k=0; k<j-1; k++)
                        temp2[k] = ptrPT[k];
                    delete[] ptrPT;
                    ptrPT = temp2;
                    ptrPT[i-1].entryPT();
                    i++;
                }
                else
                    cout<<"Please Enter a Valid Employee's Status\n";
            cout<<"\n---------------------------------\n\n";
            status = 0;
            break;

        case 2 :
            for (num = 0; num<i-1; num++)
            {
                ptrFT[num].displayFT();
                cout<<"\n---------------------------------\n\n";
            }
            for (num = 0; num<j-1; num++)
            {
                ptrPT[num].displayPT();
                cout<<"\n---------------------------------\n\n";
            }
            break;

        case 3 :
            cout<<"Enter Employee Code to Search  :  ";
            cin>>empCode;
            for (num = 0; num<i && num<j; num++)
            {
                if(ptrFT[num].getEmpCode() == empCode)
                {
                    ptrFT[num].displayFT();
                    break;
                }
                else if(ptrPT[num].getEmpCode() == empCode)
                {
                    ptrPT[num].displayPT();
                    break;
                }
            }
            if(num>=i && num>=j)
                cout<<"There is no Employee with this Code\n";
            cout<<"\n---------------------------------\n\n";
            break;

        case 4 :
            exit(0);
            
        default:
            cout<<"Its an Invalid Choice, please try again\n";
            cout<<"\n---------------------------------\n\n";
        }
    }
    return 0;
}