#include<iostream>
using namespace std;
class Counter
{
    static int count;

    public :
    Counter() {count++;}
    static int showCount()  {return count;}
};
int Counter::count;
int main()
{
    Counter c1, c2, c3;
    cout<<Counter::showCount()<<endl;
    Counter c4;
    cout<<c4.showCount();
    return 0;
}