#include<iostream>
using namespace std;
class Rectangle
{
    float l, b;
    
    public :
    int area(int a, int b) {return a*b;}
    float area(int a, float b) {return a*b;}
    float area(float a, int b) {return a*b;}
    float area(float a, float b) {return a*b;}
};
int main()
{
    Rectangle r;
    cout<<r.area(2,3)<<endl;
    cout<<r.area(2,3.5f)<<endl;
    cout<<r.area(2.5f,3)<<endl;
    cout<<r.area(2.5f,3.5f)<<endl;
    return 0;
}