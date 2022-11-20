#include<iostream>
using namespace std;
class Numbers
{
    int a, b, c;

    public :
    void set(int x, int y, int z)  {a=x, b=y, c=z;}
    int largest()
    {
        return (a>b)? (a>c? a:c) : (b>c? b:c);
    }
};
int main()
{
    Numbers n;
    n.set(4,6,5);
    cout<<"largest in these three is : "<<n.largest();
    return 0;
}