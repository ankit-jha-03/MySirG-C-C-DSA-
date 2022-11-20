#include<iostream>
using namespace std;
class Student
{
    protected :
    int id;
    char name[20];
};
class StudentExam : public Student
{
    protected :
    int s1, s2, s3, s4, s5, s6;
};
class StudentResult : public StudentExam
{
    public :
    StudentResult()
    {
        cout<<"\n------------------------------------\n";
        cout<<endl<<"Enter Roll No.          :  ";
        cin>>id;

        cout<<endl<<"Enter Student Name      :  ";
        fflush(stdin);
        fgets(name, 19, stdin);
        name[19] = '\n';
        
        cout<<endl<<"Enter Marks for Sub 1   :  ";
        cin>>s1;
        cout<<endl<<"Enter Marks for Sub 2   :  ";
        cin>>s2;
        cout<<endl<<"Enter Marks for Sub 3   :  ";
        cin>>s3;
        cout<<endl<<"Enter Marks for Sub 4   :  ";
        cin>>s4;
        cout<<endl<<"Enter Marks for Sub 5   :  ";
        cin>>s5;
        cout<<endl<<"Enter Marks for Sub 6   :  ";
        cin>>s6;
    }
    void result()
    {
        cout<<endl<<"Roll No.             :  "<<id;
        cout<<endl<<"Enter Student Name   :  "<<name;
        cout<<endl<<"Marks of subject 1   :  "<<s1;
        cout<<endl<<"Marks of subject 2   :  "<<s2;
        cout<<endl<<"Marks of subject 3   :  "<<s3;
        cout<<endl<<"Marks of subject 4   :  "<<s4;
        cout<<endl<<"Marks of subject 5   :  "<<s5;
        cout<<endl<<"Marks of subject 6   :  "<<s6<<endl;
        cout<<endl<<"Total Percentage     :  "<<(s1+s2+s3+s4+s5+s6)/6.0;
        cout<<"\n------------------------------------\n";
    }
};
int main()
{
    int i = 0, n;
    cout<<"Enter No. of Students  :  ";
    cin>>n;
    StudentResult std[n];       // assumed total marks 100 per subject

    cout<<"\n------------------------------------\n";
    cout<<  "********* Student Marklist *********"  ;
    cout<<"\n------------------------------------\n";

    for(i=0; i<n; i++)  std[i].result();
    return 0;
}