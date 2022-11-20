#include<iostream>
using namespace std;
float add(float, float);
int main()
{
    int a;
    float b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    cout<<"additon is : "<<add(a,b);
    return 0;
}
float add(float a, float b)
{
    return a+b;
}