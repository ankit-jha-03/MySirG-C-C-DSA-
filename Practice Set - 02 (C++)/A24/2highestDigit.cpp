#include<iostream>
using namespace std;
int highestDigit(int);
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    cout<<"Highest digit in "<<n<<" is "<<highestDigit(n);

    return 0;
}
int highestDigit(int n)
{
    
    int i, digit, temp = n, max = -99;

    for(digit=1; temp>9; digit++, temp /= 10);

    for(i = 1, temp = n; i<=digit; i++, temp /= 10)
        max = max > temp%10 ? max : temp%10;

    return max;
}