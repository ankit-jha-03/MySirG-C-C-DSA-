#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string tempLine;
    ifstream if1("c:/file/sample5.1.txt");
    ifstream if2("c:/file/sample5.2.txt");
    ofstream of3("c:/file/sampleMerged5.txt");

    while(if1.good())
    {
        getline(if1, tempLine);
        of3<<tempLine<<endl;
    }
    while(if2.good())
    {
        getline(if2, tempLine);
        of3<<tempLine<<endl;
    }
    if1.close();
    if2.close();
    of3.close();
    
    ifstream if3("c:/file/sampleMerged5.txt");
    while(if3.good())
    {
        getline(if3, tempLine);
        cout<<tempLine<<endl;
    }
    of3.close();
    return 0;
}