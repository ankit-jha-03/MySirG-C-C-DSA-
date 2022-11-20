#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    int countChar = 0;
    char temp;
    ofstream of1("sample2.txt");
    of1<<"This is real sample";
    of1.close();

    ifstream if1("sample2.txt");
    while(if1.good())       //      !if1.eof()
    {
        temp = if1.get();
        if((temp>='A' && temp<='Z') || (temp>='a' && temp<='z'))
            countChar++;
    }
    cout<<"No. of character : "<<countChar;
    return 0;
}