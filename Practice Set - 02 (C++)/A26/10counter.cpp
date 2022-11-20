#include<iostream>
using namespace std;
class Counter
{
    static int count;

    public:
    static void increament() {count++;}
    static int showCount()  {cout<<count;}

};
int Counter::count;
int main()
{
    Counter c;
    c.increament();
    c.increament();
    c.increament();
    c.showCount();
    return 0;
}