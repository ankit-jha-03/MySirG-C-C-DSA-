#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    cout<<"max is : "<<((a>b)?a:b);     // why ()?
    return 0;
}