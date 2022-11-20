#include<iostream>
using namespace std;
// rs == float
// and 1 Dollar == 100 Rupee
class Rupee
{
    float rs;

    public :
    void display()  {cout<<"Rupee : "<<rs<<endl;}
    float getRS()  {return rs;}
    Rupee()  {};
    Rupee(float a)  {rs = a;}
};
class Dollar
{
    float dl;

    public :
    void display()  {cout<<"Dollar : "<<dl<<endl;}
    Dollar()  {};
    Dollar(Rupee r) {dl = r.getRS()/100;}
    operator Rupee()
    {
        Rupee r = dl*100;
        return r;
    }
};
int main()
{
    Rupee r = 23;
    Dollar d = r;   // Rupee to Dollar conversion
    d.display();
    r.display();
    r = d;          // Dollar to Rupee Conversion
    d.display();
    r.display();
    return 0;
}