#include<iostream>
using namespace std;
class Bank
{
    int principle, years;
    static float roi;

    public :
    Bank(int a, int b)  {principle=a, years=b;}
    static void setROI(float a)  {roi=a;}
    void showSI()
    {
        cout<<"interest on your principle money \""<<principle<<"\" for \""<<years<<"\" is : "<<endl;
        cout<<(principle*years*roi)/100;
    }
};
float Bank::roi;
int main()
{
    Bank ac(1000, 3);
    Bank::setROI(7.5);
    ac.showSI();
    return 0;
}