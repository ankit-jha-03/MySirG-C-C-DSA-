#include<iostream>
int mobNoValidation(char*);
using namespace std;
int main()
{
    char s[20];
    cout<<"Enter a Mob-no. : ";
    cin>>s;     // Mob-no. doesn't contain spaces
    
    try
    {
        if(mobNoValidation(s))
            throw "Its valid Mob-no.";
    
        cout<<s;
        cout<<"Its not a valid Mob-no.";
    }
    catch(const char *str)
    {
        cout<<s<<endl;
        cout<<str;
    }
    return 0;
}
int mobNoValidation(char *s)
{
    int i;

    for(i=0; s[i]!=0; i++)
    {
        if(s[i]<='0' || s[i]>='9')
            return 0;
        if(i>9)
            return 0;
    }
    if (i==10)
        return 1;
    else
        return 0;
}