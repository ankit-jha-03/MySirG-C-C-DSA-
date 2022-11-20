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
    void* operator new (size_t size)
    {
        cout<<"Coustom memory Allocation done!!\n";
        return malloc(size);
    }
    void operator delete (void *p)
    {
        cout<<"Coustom memory De-Allocation done!!\n";
        free(p);
    }
};
int main ()
{
    Student *s;
    s = new Student;
    s->showDetail();
    delete s;
    cout<<"All-Done!";
    return 0;
}