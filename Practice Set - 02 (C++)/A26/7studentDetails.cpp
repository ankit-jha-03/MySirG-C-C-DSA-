#include <iostream>
using namespace std;
class Student
{
    int rollNo;
    char name[20];

    public :
    Student()
    {
        cout<<"enter roll No. : ";
        cin>>rollNo;
        cout<<"enter name : ";
        fflush(stdin);
        fgets(name, 20, stdin);
    }
    void showDetail()
    {
        cout<<"roll no. : "<<rollNo<<" , name : "<<name;
    }
};
int main ()
{
    int i, n;
    cout<<"enter number of Student : ";
    cin>>n;

    Student s[n];

    for (i=0; i<n; i++)
        s[i].showDetail();

    return 0;
}