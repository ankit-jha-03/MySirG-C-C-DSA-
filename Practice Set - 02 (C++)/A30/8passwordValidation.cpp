#include<iostream>
using namespace std;
int len = 0, capital = 0, digit = 0, special = 0;
void passwordValidation(char*);
int main()
{
    char s[20];
    cout<<"Enter a password : ";
    fgets(s, 20, stdin);
    
    try
    {
        passwordValidation(s);
        if(len<6)
            throw "password must have atleast 6 character";
        if(!capital)
            throw "Password must contain atleast one 'capital character'";
        else if(!digit)
            throw "Password must contain atleast one 'digit'";
        else if(!special)
            throw "Password must contain atleast one 'special symbol'";
        else
            cout<<s;
            cout<<"its a valid password";
    }
    catch(const char *str)
    {
        cout<<s;
        cout<<str;
    }
    catch(...)
    {
        cout<<"unexpected exception!!";
    }
    return 0;
}
void passwordValidation(char *s)
{
    for(len=0; s[len]!=0; len++)
    {
        if(s[len]==10)
            break;

        if(s[len]>='A' && s[len]<='Z')
            capital = 1;
        else if(s[len]>='0' && s[len]<= '9')
            digit = 1;
        else if(s[len]>='a' && s[len]<='z');
        else special = 1;
    }
}