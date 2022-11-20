#include<iostream>
using namespace std;
class Coordinate
{
    int a, b, c;

    public :
    Coordinate()  {};
    Coordinate(int x, int y, int z)  {a=x, b=y, c=z;}
    void display()  {cout<<a<<","<<b<<","<<c<<endl;}
    Coordinate operator,(Coordinate x)
    {
        return x;       
        // return *this : to return left side's object
    }
};
int main()
{
    Coordinate a(1,2,3), b(4,5,6), c;
    c = (a,b);
    c.display();
    
    return 0;
}