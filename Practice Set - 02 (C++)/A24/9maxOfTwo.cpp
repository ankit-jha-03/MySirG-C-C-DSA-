#include<iostream>
using namespace std;
float max(float, float);
int main()
{
    int a;
    float b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    cout<<"max is : "<<max(a,b);
    return 0;
}
float max(float a, float b)
{
    return a>b? a:b;
}