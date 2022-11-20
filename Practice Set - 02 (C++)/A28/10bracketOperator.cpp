#include<iostream>
using namespace std;
class Distance
{
    int feet, inch;

    public :
    Distance()  {};
    Distance(int a, int b)  {feet = a, inch = b;}
    void display()  {cout<<"feet = "<<feet<<" , "<<"inch = "<<inch<<endl;}
    void operator() (int a, int b, int c)
    {
        feet = a + c + 5;
        inch = a + b + 15;
    }
};
int main()
{
    Distance a(1,2), b;
    b(1,2,3);
    a.display();
    b.display();
    return 0;
}