#include<iostream>
using namespace std;
class Integer
{
    float x;

    public :
    Integer()  
    {
        cout<<"default constructor is called"<<endl;
    }
    Integer(float a)
    {
        cout<<"copy constructor called"<<endl;
        x=a;
    }
    void operator=(Integer a)
    {
        cout<<"assignment operator is called"<<endl;
        x = a.x;
    }
    operator int()      // int() : it's defines the return type
    {
        cout<<"type convertor is called"<<endl;
        return x;
    }
};
int main()
{
    Integer a = 5.5, b;        // a(5.5) : copy constructot, default constructor
    b = 4.4;        // assignment operator ---> copy constructor
    float x = int(a), y;       // int(a) : (int)a
    y = b;                  // type convertor implicity called
    cout<<x<<" "<<y;
    return 0;
}