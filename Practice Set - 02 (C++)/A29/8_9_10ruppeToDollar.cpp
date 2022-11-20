#include<iostream>
using namespace std;
// assumed 1 Rupee == float(1)
// and 1 Dollar == 100 Rupee
class Rupee
{
    float rs;

    public :
    void display()  {cout<<"Rupee : "<<rs<<endl;}
    Rupee()  {};
    Rupee(float a)  {rs = a;}
    operator float()  {return rs;}
};
class Dollar
{
    float dl;

    public :
    void display()  {cout<<"Dollar : "<<dl<<endl;}
    Dollar()  {};
    Dollar(float a)  {dl = a/100;}
    operator float()  {return dl*100;}
};
int main()
{
    float x = 50;
    Rupee r;
    Dollar d;
    r = 50;             // CO --> CC
    d = (float)r;       // TCO(r-i) --> CO(d=d) --> TCO(i-d)
    d.display();
    x = 100;
    d = x;              // CO --> CC
    r = (float)d;       // TCO(d-i) --> CO(r=r) --> TCO(i-r)
    r.display();
    return 0;
}