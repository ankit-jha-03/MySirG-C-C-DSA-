#include<iostream>
using namespace std;
class Customer
{
    protected :
    char name[20];
    long long phoneNo;

    public :
    Customer()
    {
        cout<<endl<<"Enter Customer Name       :  ";
        fflush(stdin);
        fgets(name, 19, stdin);
        name[19] = '\n';

        cout<<endl<<"Enter Customer Phone No.  :  ";
        cin>>phoneNo;
    }

};
class Depositer : public Customer
{
    protected :
    int accNo, bal;

    public :
    Depositer()
    {
        cout<<endl<<"Enter Customer A/C No.    :  ";
        cin>>accNo;
        
        cout<<endl<<"Enter Balance             :  ";
        cin>>bal;
    }

};
class Borrower : public Depositer
{
    int loanNo, loanAmt;

    public :
    Borrower()
    {
        cout<<endl<<"Enter Loan No            :  ";
        cin>>loanNo;
        cout<<endl<<"Enter Loan Amount        :  ";
        cin>>loanAmt;
        cout<<"\n--------------------------------------\n";
    }
    void display()
    {
        cout<<endl<<"Details of Customer\n";
        cout<<"\n--------------------------------------\n";
        cout<<endl<<"Customer Name             :  "<<name;
        cout      <<"Customer Phone No.        :  "<<phoneNo;
        cout<<endl<<"Customer A/C No.          :  "<<accNo;
        cout<<endl<<"Balance                   :  "<<bal;
        cout<<"\n--------------------------------------\n";
        cout<<endl<<"Loan No                   :  "<<loanNo;
        cout<<endl<<"Loan Amount               :  "<<loanAmt;
        cout<<"\n--------------------------------------\n";
    }
};
int main()
{
    int i = 0, n;
    cout<<"Enter Number of Customer  :  ";
    cin>>n;
    cout<<"\n--------------------------------------\n";
    
    Borrower customer[n];

    for(i=0; i<n; i++)  customer[i].display();
    return 0;
}