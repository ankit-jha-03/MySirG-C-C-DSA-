#include<iostream>
using namespace std;
class Complex
{
    int a, b;

    public :
    void setData(int r, int i)  {a=r, b=i;}
    void showData()
    {
        if(b>=0)
            cout<<a<<" + "<<b<<"i"<<endl;
        else
            cout<<a<<" - "<<-b<<"i"<<endl;
    }
    // default constructor
    Complex()  {};
    // copy constructor / it is also peramearized constructor (coz, a value is passed)
    Complex (Complex &c)            // !(&) : infinite recursion
    {
        a = 2, b = 2;
    }
    // assignment operator
    Complex& operator=(Complex &c)  // !(&) : (c = c1) will execute -> c.a=2, c.b=2;
    {                           // return type reference coz? (maybe coz we have the referced value to return)
        a = c.a;
        b = c.b;
        return c;
        // return *this;
    }
};
int main()
{
    Complex c1, c3;
    c1.setData(1,1);
    Complex c2 = c1;        // copy constructor : c3(c1)
    c3 = c2 = c1;                // assignment operator
    c1.showData();
    c2.showData();
    c3.showData();

    return 0;
}