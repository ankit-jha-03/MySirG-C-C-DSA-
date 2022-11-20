#include<iostream>
using namespace std;
void exceptionHandlling(int);
int main()
{
    int x;
    cout<<"Enter any number : ";
    cin>>x;
    exceptionHandlling(x);
    return 0;
}
void exceptionHandlling(int a)
{
    try
    {
        if(a>-10 && a<10)
            throw a;
        else
            throw "Its not a single digit number";
    }
    catch (int)
    {
        cout<<"its a single digit number";
    }
    catch (const char *str)
    {
        cout<<str;
    }
}