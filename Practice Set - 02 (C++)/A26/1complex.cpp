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
    Complex add(Complex c)
    {
        Complex r;
        r.a = a+c.a;
        r.b = b+c.b;
        return r;
    }
};
int main()
{
    Complex c1, c2, c3;
    c1.setData(4,-3);
    c1.showData();
    c2.setData(-2,8);
    c2.showData();

    c3=c1.add(c2);
    c3.showData();

    return 0;
}