#include<iostream>
using namespace std;
class Fraction
{
    long num, den;

    public:
    Fraction(long n=0, long d=0) {num = n, den = d;}
    friend istream & operator>>(istream &,Fraction &);
    friend ostream & operator<<(ostream &,Fraction);
    Fraction operator++()
    {
        Fraction f;
        f.num = ++num;
        f.den = ++den;
        return f;
    }
    Fraction operator++(int)
    {
        Fraction f;
        f.num = num++;
        f.den = den++;
        return f;
    }
};
istream & operator>>(istream &, Fraction &f)
{
    cout<<endl<<"Numeraotr   :  ";
    cin>>f.num;
    cout<<endl<<"Denominator :  ";
    cin>>f.den;
    cout<<endl;
    return cin;
}
ostream & operator<<(ostream &, Fraction f)
{
    cout<<f.num<<"/"<<f.den<<endl;
    return cout;
}
int main()
{
    Fraction f1, f2;
    cout<<"f1  :  "<<f1;
    cout<<"f2  :  "<<f2;

    cout<<endl<<"Enter 1st Fraction Value"<<endl;
    cin>>f1;

    f1++;
    cout<<"f1++  :  "<<f1;
    ++f1;
    cout<<"++f1  :  "<<f1;

    cout<<endl<<"Enter 2nd Fraction Value"<<endl;
    cin>>f2;

    cout<<endl<<"f2 = ++f1"<<endl;
    f2 = ++f1;
    cout<<"f1  :  "<<f1;
    cout<<"f2  :  "<<f2;

    cout<<endl<<"f2 = f1++"<<endl;
    f2 = f1++;
    cout<<"f1  :  "<<f1;
    cout<<"f2  :  "<<f2;
    return 0;
}