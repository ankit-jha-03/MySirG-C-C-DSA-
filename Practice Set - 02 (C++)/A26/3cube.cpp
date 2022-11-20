#include<iostream>
using namespace std;
class Cube
{
    int n;

    public :
    Cube(int a)  {n=a;}
    int getNum()  {return n;}
    int cube()  {return n*n*n;}
};
int main()
{
    Cube c(5);
    cout<<"Cube of "<<c.getNum()<<" is : "<<c.cube();
    return 0;
}