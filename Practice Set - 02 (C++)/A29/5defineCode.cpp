#include<iostream>
using namespace std;
class Invent1
{
    int a, b;
    
    public :
    Invent1(int x, int y)  {a=x, b=y;}
    int getInvent1()  {return a+b;}
    operator float()
    {
        return a+b;
    }
};
class Invent2
{
    int c;

    public :
    Invent2() {}
    Invent2(Invent1 a)
    {
        cout<<"CC in 2"<<endl;
        c = a.getInvent1();
    }
    Invent2 operator=(Invent2 a)
    {
        cout<<"CO in 2"<<endl;
        c = a.c;
    }
    /* maybe it is most efficient */
    // void operator=(Invent1 x)
    // {
    //     cout<<"AO in 2"<<endl;
    //     c = x.getInvent1();
    // }
    void display()  {cout<<c<<endl;}
};
int main()
{
    Invent1 x(4,5);
    Invent2 y;
    float z;
    z = x;      // TCO : float(x)
    y = x;      // ways :-> operator = : [in Invent2]  /  operator invent2() : [in Invent 1]  /  AO --> CC  [in invent2] 
    cout<<z<<endl;
    y.display();
    return 0;
}