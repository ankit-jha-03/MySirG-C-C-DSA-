#include<iostream>
int areaCodeValidation(char*);
using namespace std;
int main()
{
    char s[30];
    cout<<"Enter a Area Code : ";
    cin>>s;     // Area Code doesn't contain spaces
    
    try
    {
        if(areaCodeValidation(s))
            throw "Its valid Area Code";

        cout<<s<<endl;
        cout<<"Its not a valid Area Code";
    }
    catch(const char *str)
    {
        cout<<s<<endl;
        cout<<str;
    }
    return 0;
}
int areaCodeValidation(char *s)
{
    int i;

    for(i=0; s[i]!=0; i++)
    {
        if(s[i]<='0' || s[i]>='9')
            return 0;
        if(i>5)
            return 0;
    }
    if (i==6)
        return 1;
    else
        return 0;
}