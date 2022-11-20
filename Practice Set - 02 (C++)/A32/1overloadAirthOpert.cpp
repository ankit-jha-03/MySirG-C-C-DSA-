#include<iostream>
using namespace std;
class FLOAT
{
    float f;

    public :
    FLOAT() {}
    FLOAT(float x) {f = x;}
    FLOAT operator+(FLOAT x)
    {
        FLOAT temp;
        temp.f = f + x.f;
        return temp;
    }
    FLOAT operator-(FLOAT x)
    {
        FLOAT temp;
        temp.f = f - x.f;
        return temp;
    }
    FLOAT operator*(FLOAT x)
    {
        FLOAT temp;
        temp.f = f * x.f;
        return temp;
    }
    FLOAT operator/(FLOAT x)
    {
        FLOAT temp;
        temp.f = f / x.f;
        return temp;
    }
    void display()  {cout<<f<<endl;}
};
int main()
{
    FLOAT f1, f2, f3, f4;
    f1 = 4;
    f2 = 6;
    f3 = f1+f2;
    f4 = f1*f2;
    f3.display();
    f4.display();
    return 0;
}