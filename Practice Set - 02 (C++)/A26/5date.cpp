#include<iostream>
using namespace std;
class Date
{
    int d, m, y;

    public :
    Date(int a, int b, int c)  {d=a, m=b, y=c;}
    void showDate()  {cout<<d<<"\\"<<m<<"\\"<<y;}
};
int main()
{
    Date d(23,4,2022);
    d.showDate();
    return 0;
}