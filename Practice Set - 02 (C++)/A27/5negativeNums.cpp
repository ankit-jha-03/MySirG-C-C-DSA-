#include<iostream>
using namespace std;
class Numbers
{
    int x,y,z;
    
    public :
    void setNumbers(int a, int b, int c)  {x=a,y=b,z=c;}
    void showNumbers()  {cout<<x<<","<<y<<","<<z<<endl;}
    Numbers operator-()
    {
        Numbers n;
        n.x = -x;
        n.y = -y;
        n.z = -z;
        return n;
    }
};
int main()
{
    Numbers n1, n2;
    n1.setNumbers(4,-5,6);
    n2 = -n1;
    n2.showNumbers();
    (-n2).showNumbers();
    return 0;
}