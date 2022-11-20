#include<iostream>
using namespace std;
class Factorial
{
    int n;

    public :
    void setNum(int a)  {n=a;}
    int getNum() {return n;}
    int fact()
    {
        if(n<2)
            return 1;
        Factorial temp;
        temp.n = n-1;
        return n*temp.fact();
    }
};
int main()
{
    Factorial f;
    f.setNum(6);
    cout<<"factorial of "<<f.getNum()<<" is : "<<f.fact();
    
    return 0;
}