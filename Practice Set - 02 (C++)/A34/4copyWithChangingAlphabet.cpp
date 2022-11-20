#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char tempChar;
    string tempLine;
    ifstream if1("c:/file/sample4.txt");
    ofstream of2("c:/file/sample4copied.txt");
    
    while(!if1.eof())
    {
        if1.get(tempChar);
        if(tempChar>='A' && tempChar<='Z')
            tempChar += 32;
        else if(tempChar>='a' && tempChar<='z')
            tempChar -= 32;

        of2<<tempChar;
        tempChar = '\0';        // why loop are one more than required??
    }
    if1.close();
    of2.close();

    ifstream if2("c:/file/sample4copied.txt");
    while(if2.good())
    {
        getline(if2, tempLine);
        cout<<tempLine<<endl;
    }
    if2.close();
    return 0;
}