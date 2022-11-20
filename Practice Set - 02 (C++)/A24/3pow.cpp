#include<iostream>
using namespace std;
float pow(int, int);
int main()
{
    int x, y;
    cout<<"Enter the number with power on it : ";
    cin>>x>>y;

    cout<<x<<" rised to the power "<<y<<" is : "<<pow(x,y);
    return 0;
}
float pow(int x, int y)
{
    if(y==0)
        return 1;
    else if(y>0)
        return x*pow(x, --y);
    else
        return 1/pow(x,-y);
}