#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream of1;
    of1.open("a.txt", ios::app);
    of1<<"this is appended\n";
    of1.close();
    return 0;
}