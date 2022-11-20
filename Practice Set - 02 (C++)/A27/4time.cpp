#include<iostream>
using namespace std;
class Time
{
    int h, m, s;
    void normalize()
    {
        m += s/60;
        s %= 60;
        h += m/60;
        m %= 60;
    }

    public :
    friend istream & operator>>(istream &, Time &);
    friend ostream & operator<<(ostream &, Time);
    int operator==(Time t)
    {
        if(h*3600+m*60+s == t.h*3600+t.m*60+t.s)
            return 1;
        else
            return 0;
    }
};
istream & operator>>(istream &, Time &t)
{
    cout<<"---------------------";
    cout<<endl<<"Enter Hours   :  ";
    cin>>t.h;
    cout<<endl<<"Enter Minutes :  ";
    cin>>t.m;
    cout<<endl<<"Enter seconds :  ";
    cin>>t.s;
    return cin;
}
ostream & operator<<(ostream &, Time t)
{
    t.normalize();
    cout<<endl;
    cout<<"Hours   :  "<<t.h<<endl;
    cout<<"Minutes :  "<<t.m<<endl;
    cout<<"seconds :  "<<t.s<<endl;
    return cout;
}
int main()
{
    Time t1, t2, t3;
    cout<<"Enter First Time"<<endl;
    cin>>t1;
    cout<<endl<<"First Time"<<t1;

    cout<<endl<<"Enter Second Time"<<endl;
    cin>>t2;
    cout<<endl<<"Second Time"<<t2;

    if(t1==t2)
        cout<<endl<<"Times are same";
    else
        cout<<endl<<"Times are different";
    return 0;
}