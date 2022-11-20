#include<iostream>
using namespace std;
void swap(int &, int &);
int main()
{
    int a, b;
    cout<<"enter two numbers a & b : ";
    cin>>a>>b;

    swap(a,b);

    cout<<"a = "<<a<<" , b = "<<b;
    return 0;
}
void swap(int &x, int &y)
{
    x = x+y;
    y = x-y;
    x = x-y;
}