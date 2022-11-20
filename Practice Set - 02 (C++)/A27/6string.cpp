#include<iostream>
#include<string.h>
using namespace std;
class CString
{
    char str[20];

    public :
    void setString()
    {
        cout<<"Enter string : ";
        fflush(stdin);
        fgets(str, 20, stdin);
        str[strlen(str)-1] = '\0';
    }
    void showString() 
    {
        cout<<"String : "<<str<<endl;
    }
    CString operator+(CString abc)
    {
        CString temp;
        strcpy(temp.str,str);
        strcat(temp.str,abc.str);
        return temp;
    }
    int operator==(CString abc)
    {
        if(strcmp(str,abc.str)==0)
            return 1;
        else
            return 0;
    }
};
int main()
{
    CString a, b, c;
    a.setString();
    b.setString();
    c = a+b;
    a.showString();
    b.showString();
    c.showString();

    if(a==b)
        cout<<"CString 'a' & 'b' are equal";
    else
        cout<<"CString 'a' & 'b' aren't equal";
    return 0;
}