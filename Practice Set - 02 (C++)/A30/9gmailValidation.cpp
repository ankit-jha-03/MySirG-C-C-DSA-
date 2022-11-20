#include<iostream>
#include<cstring>
int gmailValidation(char*);
using namespace std;
int main()
{
    char s[30];
    cout<<"Enter a gmail-id : ";
    fgets(s, 30, stdin);     
    
    try
    {
        if(strstr(s, "@gmail.com") && strlen(s)>11)
            throw "Its valid gmail-id";
    
        cout<<s;
        cout<<"Its not a valid gmail-id";
    }
    catch(const char *str)
    {
        cout<<s<<endl;
        cout<<str;
    }
    return 0;
}