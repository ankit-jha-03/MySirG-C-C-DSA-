#include<iostream>
using namespace std;
class Shape
{
    float area;
    
    public :
    void setArea(int a)  {area = a;}
    void displayArea()  {cout<<area;}
};
class Circle
{
    Shape s;        // area will be stored here
    float r;

    public :
    void setRedius(float a)  {r=a;}
    void calculateArea()  {s.setArea(3.14*r*r);}        // area stored
    Shape* operator->()
    {
        return &s;
    }
};
int main()
{
    Circle c;
    c.setRedius(5);
    c.calculateArea();
    c->displayArea();       // need pointer of "Shape object" to access "displayArea"
    return 0;
}