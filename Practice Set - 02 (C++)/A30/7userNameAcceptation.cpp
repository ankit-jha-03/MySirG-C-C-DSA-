#include<iostream>
int userNameValidation(char*);
using namespace std;
int main()
{
    char s[20];
    cout<<"Enter a user name : ";
    fgets(s, 20, stdin);
    
    try
    {
        if(userNameValidation(s))
            throw "Its valid user name";
        
        cout<<s;
        cout<<"Its not a valid user name";
    }
    catch(const char *str)
    {
        cout<<s;
        cout<<str;
    }
    return 0;
}
int userNameValidation(char *s)
{
    int i;

    for(i=0; s[i]!=0; i++)      // i guess we can't check for 'NULL '\n' together
    {
        if(s[i]==10)
            break;
        if((s[i]<'A' || s[i]>'Z') && (s[i]<'a' || s[i]>'z'))
            return 0;
    }
    if (i<6)
        return 0;
    else
        return 1;
}