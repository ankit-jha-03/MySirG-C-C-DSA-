#include<iostream>
using namespace std;
class Integer
{
    int n;
    
    public :
    void display()  {cout<<n<<endl;}
    Integer () {};
    Integer (int a)  {n=a;}
    int operator!()
    {
        if(n==0)
            return 1;
        else
            return 0;
    }
};
int main()
{
    Integer a(0);
    if(!a)
        cout<<"its 0";
    else
        cout<<"its not 0";
    return 0;
}