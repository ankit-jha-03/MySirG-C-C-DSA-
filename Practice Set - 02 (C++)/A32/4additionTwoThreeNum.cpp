#include<iostream>
using namespace std;
class Addition
{
    public :
    virtual void displaySum(int x, int y)
    {
        cout<<x+y<<endl;
    }
    void displaySum(int x, int y, int z)
    {
        cout<<x+y+z<<endl;
    }
};
int main()
{
    Addition a;
    a.displaySum(3,4);
    a.displaySum(4,3,2);
    return 0;
}