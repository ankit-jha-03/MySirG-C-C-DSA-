#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string fileName;
    cout<<"Enter the File name : ";
    cin>>fileName;

    ofstream of1;
    try
    {
        of1.open(fileName+".txt");       // ios::out (inbuilt with ofstream)
        if(!of1.is_open())
            throw 1;
        cout<<"File created successfully";
    }
    catch(...)
    {
        cout<<"File creation Failed";
    }
    of1.close();

    return 0;
}