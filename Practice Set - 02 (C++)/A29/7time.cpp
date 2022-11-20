#include<iostream>
using namespace std;
class Time
{
    int hr, min, sec;

    public :
    Time()  {}
    Time(int a, int b=0, int c=0)  {hr=a, min = b, sec = c;}
    void display()
    {
        cout<<hr<<" : "<<min<<" : "<<sec<<endl;
    }
    int getSec()  {return hr*3600+min*60+sec;}
};
class Minute
{
    float min = 0;

    public :
    void display()  {cout<<"min : "<<min<<endl;}
    void operator= (Time t)
    {
        min = t.getSec()/60.0;
    }
};
int main()
{
    Time t1(2,30,30);
    t1.display();
    Minute m1;
    m1.display();
    m1 = t1;          // Fetch minute from time
    t1.display();
    m1.display();
    return 0;
}
