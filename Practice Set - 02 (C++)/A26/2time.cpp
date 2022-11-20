#include<iostream>
using namespace std;
class Time
{
    int h, m, s;

    public :
    void setTime(int a, int b, int c)  {h=a, m=b, s=c;}
    void showTime()  { cout<<h<<" : "<<m<<" : "<<s<<endl ;}
    void normalize()
    {
        m += s/60;
        s %= 60;
        h += m/60;
        m %= 60;
    }
    Time add(Time t)
    {
        Time temp;
        temp.h = h+t.h;
        temp.m = m+t.m;
        temp.s = s+t.s;
        temp.normalize();
        return temp;
    }
};
int main()
{
    Time t1, t2, t3;
    t1.setTime(4,66,67);
    t1.normalize();
    t1.showTime();
    t2.setTime(3,78,121);
    t2.normalize();
    t2.showTime();
    
    t3 = t1.add(t2);
    t3.showTime();
    return 0;
}