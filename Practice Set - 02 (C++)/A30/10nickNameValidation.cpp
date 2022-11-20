#include<iostream>
using namespace std;
int len, digit = 0, special = 0;
int nickNameValidation(char*);
int main()
{
    char s[20];
    cout<<"Enter a Nick Name : ";
    fgets(s, 20, stdin);
    
    try
    {
        nickNameValidation(s);
        if(len==9)
            throw "nick name can't contain more than 8 characters";
        else if(digit)
            throw "nick name must not have any 'digit'";
        else if(special)
            throw "nick name must not have any 'special symbol'";
        else
            cout<<s;
            cout<<"its a valid nick name";
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
int nickNameValidation(char *s)
{
    for(len=0; s[len]!=0; len++)
    {
        if(s[len]==10)
            break;

        if(s[len]>='0' && s[len]<= '9')
            digit = 1;
        else if((s[len]<'a' || s[len]>'z') && (s[len]<'A' || s[len]>'Z'))
            special = 1;

        if (len==9)
            break;
    }
}