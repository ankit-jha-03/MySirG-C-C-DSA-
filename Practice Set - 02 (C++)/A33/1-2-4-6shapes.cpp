#include<iostream>
using namespace std;
class Shape
{
    protected :
    double l1, l2;

    public :
    void setData(double a, double b = 0) {l1 = a, l2 = b;}
    virtual void displayArea() = 0;     // pure virtual (=0) : Shape's objects can't creates & child class must have defination of it.
    // can't find different b/w normal virtual & without virtual.
};
class Rectangle : public Shape
{
    public :
    void displayArea() {cout<<l1*l2<<endl;}
};
class Triangle : public Shape
{
    public :
    void displayArea() {cout<<0.5*l1*l2<<endl;}
};
class Circle : public Shape
{
    public :
    void displayArea() {cout<<3.14*l1*l1<<endl;}
};
int main()
{
    Rectangle r;
    Triangle t;
    Circle c;
    r.setData(2,3);
    t.setData(2,3);
    c.setData(2);
    r.displayArea();
    t.displayArea();
    c.displayArea();
    return 0;
}