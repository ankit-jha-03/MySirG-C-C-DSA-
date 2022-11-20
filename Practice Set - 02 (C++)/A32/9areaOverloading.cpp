#include<iostream>
#include<math.h>
using namespace std;
class Shape
{
    float area = 0;

    public :
    Shape(float radius) {area = 3.14*radius;}
    Shape(float len, float breath) {area = len*breath;}
    Shape(float a, float b, float c) 
    {
        float sp = (a+b+c)/2;
        area = sqrt(sp*(sp-a)*(sp-b)*(sp-c));
    }
    float Area() {return area;}
};
int main()
{
    Shape tri(1,2,5);
    cout<<"its : "<<tri.Area();
    
    return 0;
}