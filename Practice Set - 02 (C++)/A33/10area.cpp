#include<iostream>
using namespace std;
class Shape
{
    protected :
    double a, b;
};
class Square : public Shape
{
    public :
    Square(double x) {a=x, b=x;}
    void printArea() {cout<<a*b<<endl;}
};
class Parallelogram : public Shape
{
    public :
    Parallelogram(double x, double y) {a=x, b=y;}
    void printArea() {cout<<a*b<<endl;}
};
int main()
{
    Square s(4);
    Parallelogram p(3,4);
    s.printArea();
    p.printArea();
    return 0;
}