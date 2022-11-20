#include<iostream>
using namespace std;
class Marks
{
    int marks;

    public :
    Marks(int a)  {marks = a;}
    void printMarks()  {cout<<marks<<endl;}
    /* Normal Work should be : */
    // Marks operator-> ()
    // {
    //     cout<<"Marks called"<<endl;
    //     return *this;
    // }
    Marks* operator-> ()        // -> : freiend function isn't allowed for this
    {
        cout<<"Marks* called"<<endl;
        return this;        
    }
};
int main()
{
    Marks m(90);
    Marks *n = &m;
    m.printMarks();
    m->printMarks();        // have to return pointer of 'm'
    n->printMarks();        // n-> == (*n). == m.
    return 0;
}