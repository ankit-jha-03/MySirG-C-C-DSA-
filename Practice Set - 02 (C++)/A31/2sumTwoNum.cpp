#include<iostream>
using namespace std;
class Numbers
{
    int n1, n2;

    public :
    void setNums() {cin>>n1>>n2;}
    int getN1() {return n1;}
    int getN2() {return n2;}
};
class Sum : public Numbers
{
    public :
    int getSum() {return getN1()+getN2();}
};
int main()
{
    Sum n;
    cout<<"Enter 2 Numbers : ";
    n.setNums();
    cout<<"Sum is : "<<n.getSum();
    return 0;
}