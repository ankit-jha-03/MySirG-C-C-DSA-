#include<iostream>
#include<math.h>
using namespace std;
float area(float);
float area(float, float);
float area(float, float, float);
int main()
{
    float r, l, b, x, y, z;
    cout<<"Enter redius of the circle : ";
    cin>>r;
    cout<<"area of the circle is : "<<area(r)<<endl;

    cout<<"Enter length & breath of the rectangle : ";
    cin>>l>>b;
    cout<<"area of the rectangle is : "<<area(l,b)<<endl;

    cout<<"Enter sides of triangle : ";
    cin>>x>>y>>z;
    cout<<"area of the triangle is : "<<area(x,y,z)<<endl;
    return 0;
}
float area(float r)
{
    return 3.14*r*r;
}
float area(float l, float b)
{
    return l*b;
}
float area(float a, float b, float c)
{
    int s = (a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}