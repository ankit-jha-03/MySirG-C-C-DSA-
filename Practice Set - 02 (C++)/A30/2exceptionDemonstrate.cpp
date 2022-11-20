#include<iostream>
using namespace std;
int main()
{
    try
    {
        throw 'e';
    }
    catch(...)
    {
        cout<<"Exception successfully handled";
    }
    return 0;
}