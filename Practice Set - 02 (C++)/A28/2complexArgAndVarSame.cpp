#include<iostream>
using namespace std;
class Complex
{
    int r, i;

    public :
    void set(int r, int i)  
    {
        Complex::r = r;     // or  this->r = r;
        Complex::i = i;     // or  this->i = i;
    }
    void print()
    {
        if(i>=0)
            cout<<r<<" + "<<i<<"i";
        else
            cout<<r<<" - "<<-i<<"i";
    }
};
int main()
{
    Complex c;
    c.set(4,-3);
    c.print();
    return 0;
}