#include<iostream>
using namespace std;
class Complex
{
    int r, i;

    public :
    void set(int a, int b)  {r=a, i=b;}
    void print()
    {
        if(i>=0)
            cout<<r<<" + "<<i<<"i"<<endl;
        else
            cout<<r<<" - "<<-i<<"i"<<endl;
    }
    Complex()  {}
    Complex(int a)  {r = a, i = 0;}
    operator int()
    {
        return r;
    }
};
int main()
{
    // 1.
    Complex c;
    c.set(4,-3);
    int x = 5;
    c = x;      // CO --> PC
    c.print();

    // 2.
    c.set(4,-3);
    // x = c;
    cout<<(int)c;

    return 0;
}