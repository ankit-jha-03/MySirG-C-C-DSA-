#include<iostream>
#include<fstream>
using namespace std;
int words(string);
int main()
{
    char tempChar;
    string tempLine;
    int countChar = 0, countWord = 0, countLine = 0;
    ifstream if1("c:/file/sample6.txt");
    if(!if1)
        cout<<"nope"<<endl;

    while(if1.good())
    {
        if1.get(tempChar);
        if((tempChar>='A' && tempChar<='Z') || (tempChar>='a' && tempChar<='z'))
            countChar++;
    }
    if1.close();
    if1.open("c:/file/sample6.txt");
    while(if1.good())
    {
        getline(if1, tempLine);
        countWord += words(tempLine);
        countLine++;
    }
    if1.close();
    
    cout<<"Number of Characters are : "<<countChar<<endl;
    cout<<"Number of Words are : "<<countWord<<endl;
    cout<<"Number of Lies are : "<<countLine;
    return 0;
}
int words(string a)
{
    int i, count = 0;
    for(i=0; a[i]!='\0'; i++)
    {
        if(a[i]!=' ' && (a[i+1]==' ' || a[i+1]=='\0'))
            count++;
    }
    return count;
}