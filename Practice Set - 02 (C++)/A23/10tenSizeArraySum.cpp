#include<iostream>
using namespace std;
int main()
{
    int a[10], sum = 0, i;

    cout<<"Enter 10 numbers : "<<endl;
    for(i=0; i<10; i++)
    {
        cin>>a[i];
        sum += a[i];
    }
    cout<<"Sum of all 10 numbers is : "<<sum;
    return 0;
}