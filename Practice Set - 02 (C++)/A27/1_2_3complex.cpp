#include<iostream>
using namespace std;
class Complex
{
    int a, b;

    public :
    friend istream & operator>>(istream &, Complex &);
    friend ostream & operator<<(ostream &, Complex);
    Complex operator+(Complex c)
    {
        Complex r;
        r.a = c.a+c.a;
        r.b = c.b+c.b;
        return r;
    }
    Complex operator-(Complex c)
    {
        Complex r;
        r.a = a-c.a;
        r.b = b-c.b;
        return r;
    }
    Complex operator*(Complex c)
    {
        Complex r;
        r.a = a*c.a-b*c.b;
        r.b = a*c.b+b*c.a;
        return r;
    }
    int operator==(Complex c)
    {
        if(a==c.a && b==c.b)
        return 1;
    else
        return 0;
    }
    Complex operator++()
    {
        Complex c;
        c.a = ++a;
        c.b = b;
        return c;
    }
    Complex operator++(int)
    {
        Complex c;
        c.a = a++;
        c.b = b;
        return c;
    }
    Complex operator--()
    {
        Complex c;
        c.a = --a;
        c.b = b;
        return c;
    }
    Complex operator--(int x)
    {
        Complex c;
        c.a = a--;
        c.b = b;
        return c;
    }
};
istream & operator>>(istream &tin, Complex &c)
{
    cout<<"Enter real part & imaginary part : ";
    tin>>c.a>>c.b;
    return tin;
}
ostream & operator<<(ostream &tout, Complex c)
{
    if(c.b>=0)
        tout<<c.a<<" + "<<c.b<<"i"<<endl;
    else
        tout<<c.a<<" - "<<-c.b<<"i"<<endl;
    return tout;
}
int main()
{
    Complex c1, c2, c3, c4;
    cout<<"Set Data for C1 & C2 : "<<endl;
    cin>>c1>>c2;
    cout<<c1<<c2;

    c3=c1+c2;
    cout<<c3;
    c3=c1-c2;
    cout<<c3;
    c3=c1*c2;
    cout<<c3;
    
    if(c1==c2)
        cout<<"c1 & c2 are equal"<<endl;
    else
        cout<<"c1 & c2 aren't equal"<<endl;

    c4 = ++c1;
    cout<<c4;
    c4 = c1++;
    cout<<c4<<c1;
    cout<<c4++;
    cout<<++c4;

    Complex c5 = c4;    // default copy constructor
    cout<<c5;
    return 0;
}