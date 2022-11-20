#include<iostream>
using namespace std;
class Proof
{
    protected :
    int p;

    public :
    Proof() {p=0;}
};
class Compute : public Proof
{
    int a, b, c;

    public :
    Compute(int x, int y, int z) {a=x, b=y, c=z;}
    void rightTriangleCheck()
    {
        if(a*a == b*b + c*c)        p=1;
        else if(b*b == a*a + c*c)   p=1;
        else if(c*c == a*a + b*b)   p=1;

        if(p)
            cout<<"Yes, it's is a right Triangle\n";
        else
            cout<<"No, it's not a rifht triangle\n";
    }
};
int main()
{
    Compute t(4,3,5);
    t.rightTriangleCheck();
    return 0;
}