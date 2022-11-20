#include<iostream>
using namespace std;
class Number
{
    int n;

    public :
    void setNum(int a)  {n=a;}
    int getNum() {return n;}
    int reverse()
    {
        int i, digit, rev = 0, temp = n;

        for(digit=1; temp>9; digit++, temp /= 10);

        for(temp = n; temp>0; temp /= 10)
        {
            rev *= 10;
            rev += temp%10;
        }

        return rev;
    }
};
int main()
{
    Number n;
    n.setNum(456);
    cout<<"reverse of "<<n.getNum()<<" is : "<<n.reverse();
    return 0;
}