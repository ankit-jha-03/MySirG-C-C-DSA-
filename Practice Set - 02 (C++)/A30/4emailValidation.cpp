#include<iostream>
int emailValidation(char*);
using namespace std;
int main()
{
    char s[30];
    cout<<"Enter a email-id : ";
    cin>>s;     // email id doesn't contain spaces
    
    try
    {
        if(emailValidation(s))
            throw "Its valid email-id";
    
        cout<<s;
        cout<<"Its not a valid email-id";
    }
    catch(const char *str)
    {
        cout<<s<<endl;
        cout<<str;
    }
    return 0;
}
int emailValidation(char *s)
{
    int i, atrLoc = -1, dotLoc = -1;

    for(i=0; s[i]!=0; i++)
    {
        if(s[i] == '@')
            atrLoc = i;
        if(s[i] == '.')
            dotLoc = i;
    }
    if(atrLoc == -1 || dotLoc == -1)
        return 0;
    if(dotLoc < atrLoc)
        return 0;
    if(atrLoc == dotLoc-1)
        return 0;
    if(dotLoc == i-1)
        return 0;
    return 1;
}