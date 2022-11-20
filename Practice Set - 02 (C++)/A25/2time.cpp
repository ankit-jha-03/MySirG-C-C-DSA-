#include<iostream>
using namespace std;
class Time
{
    int h, m, s;

    public :
    void setTime(int a, int b, int c)  {h=a, m=b, s=c;}
    void showTime()  { cout<<h<<" : "<<m<<" : "<<s ;}
};
int main()
{
    Time t;
    t.setTime(3,55,65);
    t.showTime();
    return 0;
}