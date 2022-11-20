#include<iostream>
using namespace std;
class Factorial
{
    int n, fact;
    
    public :
    Factorial(int x) {n=x; fact=1;}
    Factorial(Factorial &f)     // !(&) : it will keep calling copy constructor.
    {
        n = f.n;
        fact = 1;
    }
    void calciFact()
    {
        int i;
        for(i=2; i<=n; i++)
            fact *= i;
    }
    void printFact() {cout<<fact<<endl;}
};
int main()
{
    Factorial f1(4);
    f1.calciFact();
    f1.printFact();

    Factorial f2 = f1;
    f2.calciFact();
    f2.printFact();
    return 0;
}