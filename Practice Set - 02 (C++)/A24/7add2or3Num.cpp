#include<iostream>
using namespace std;
int add(int, int, int = 0);
int main()
{
    int a, b, c;
    cout<<"Enter 2 numbers : ";
    cin>>a>>b;
    cout<<"Sum is : "<<add(a,b)<<endl;

    cout<<"Enter the 3rd number : ";
    cin>>c;
    cout<<"Sum is : "<<add(a,b,c);
    return 0;
}
int add(int a, int b, int c)
{
    return a+b+c;
}