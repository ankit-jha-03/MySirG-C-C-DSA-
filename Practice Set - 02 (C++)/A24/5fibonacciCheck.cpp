#include<iostream>
using namespace std;
void fibCheck(int);
int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;

    fibCheck(n);

    return 0;
}
void fibCheck(int n)
{
    int a = -1, b = 1, c = -9, i;

    for(i=1; c<n; i++)
    {
        c = a+b;
        a = b;
        b = c;
        if(c==n)
        {
            cout<<n<<" is "<<i<<"s term of the fibonacci series";
            return;
        }
    }
    cout<<n<<" is not a term of fibonacci series";
}