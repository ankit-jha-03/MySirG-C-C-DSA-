#include<iostream>
using namespace std;
class Number
{
    int n;
    static int count;

    public :
    void setNum(int a)  {n=a ; count++;}
    int getNum()  {count++ ; return n;}
    int square() {count++ ; return n*n;}
    int funCount()  {return ++count;}
};
int Number::count;
int main()
{
    Number n;
    n.setNum(5);
    cout<<"square of "<<n.getNum()<<" is : "<<n.square()<<endl;
    cout<<"number of times funtions is called : "<<n.funCount();
    return 0;
}