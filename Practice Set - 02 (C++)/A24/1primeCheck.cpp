#include<iostream>
#include<math.h>
using namespace std;
void primeCheck(int);
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    primeCheck(n);

    return 0;
}
void primeCheck(int n)
{
    int i;

    if(n<2)
        cout<<n<<" is not a prime number";
    else
    {
        for(i=2; i<=sqrt(n); i++)
        {
            if(n%i == 0)
            {
                cout<<n<<" is not a prime number";
                return;
            }
        }
        cout<<n<<" is a prime number";
    }
}