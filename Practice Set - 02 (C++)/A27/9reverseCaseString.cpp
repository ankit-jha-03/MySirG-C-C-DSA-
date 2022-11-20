#include<iostream>
#include<string.h>
using namespace std;
class Mystring
{
    char str[100];

    public :
    void setString()
    {
        cout<<"Enter the string : ";
        fflush(stdin);
        fgets(str, 100, stdin);
        str[strlen(str)-1] = '\0';
    }
    string getString()
    {
        return str;
    }
    Mystring operator!()
    {
        int i;
        Mystring temp;
        strcpy(temp.str, str);
        for(i=0; temp.str[i]!=0; i++)
        {
            if(temp.str[i]>=65 && temp.str[i]<=90)
                temp.str[i] +=32;
            else if(temp.str[i]>=97 && temp.str[i]<=122)
                temp.str[i] -=32;
        }
        return temp;
    }
};
int main()
{
    Mystring str1, str2;
    str1.setString();
    cout<<"String is : "<<str1.getString()<<endl;
    str2 = !str1;
    cout<<"String is : "<<str2.getString();

    return 0;
}