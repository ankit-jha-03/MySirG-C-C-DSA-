#include<iostream>
using namespace std;
void pascalTriangle(int);
int comb(int, int);
int fact(int);
int main()
{
    int n;
    cout<<"Enter number of lines : ";
    cin>>n;

    pascalTriangle(n);

    return 0;
}
void pascalTriangle(int n)
{
    int i, j, k;

    for(i=0; i<n; i++)
    {
        for(k=1; k<n-i; k++)
            cout<<" ";
        for(j=0; j<=i; j++)
        {
            cout<<comb(i,j);       //%2d;
        }
        cout<<endl;
    }
}
int comb(int n, int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}
int fact(int n)
{
    if(n==0 || n==1)
        return 1;

    return n*fact(n-1);
}