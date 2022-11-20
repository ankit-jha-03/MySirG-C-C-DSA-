#include<iostream>
using namespace std;
class Shape
{
    int r, a, l, b, shape = 0;
    
    public : 
    void setCircle(int a) {r=a, shape = 1;}
    void setSquare(int x) {a=x, shape = 2;}
    void setRectangle(int x, int y)  {l=x, b=y, shape = 3;}
    float area()
    {
        if (shape==1)
            return 3.14*r*r;
        else if (shape==2)
            return a*a;
        else
            return l*b;
    }
};
int main()
{
    Shape c, s, r;
    c.setCircle(5);
    cout<<"area of the circle is : "<<c.area()<<endl;
    s.setSquare(4);
    cout<<"area of the square is : "<<s.area()<<endl;
    r.setRectangle(5,6);
    cout<<"area of the rectangle is : "<<r.area();

    return 0;
}