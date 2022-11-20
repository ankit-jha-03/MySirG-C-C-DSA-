#include<iostream>
using namespace std;
class Time
{
    int hr, min, sec;

    public :
    void display()
    {
        cout<<hr<<" : "<<min<<" : "<<sec<<endl;
    }
    Time() {}
    Time(int n)
    {
        hr = n/3600;
        n %= 3600;
        min = n/60;
        n %= 60;
        sec = n;
    }
};
int main()
{
    int duration;
    cout<<"Enter time duration in minutes : ";
    cin>>duration;
    Time t1 = duration;
    t1.display();
    return 0;
}