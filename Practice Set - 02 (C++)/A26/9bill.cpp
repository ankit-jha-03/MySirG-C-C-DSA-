#include<iostream>
using namespace std;
class Bill
{
    float unit;

    public :
    void get(float a)  {unit=a;}
    float calculateBill()
    {
        if(unit>=200)
            return 320 + (unit-200)*3;
        else if(unit>=100)
            return 120 + (unit-100)*2;
        else
            return unit*1.2;
    }
};
int main()
{
    Bill e;
    e.get(140);
    cout<<"your total bill is : "<<e.calculateBill();
    return 0;
}